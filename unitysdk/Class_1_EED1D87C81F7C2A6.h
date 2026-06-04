#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_CF8B0DC37DFDE560;
class Class_1_E8293664BB5E691F;
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class MunicipalChatNodeInfo; }
namespace RPG::GameCore { class MunicipalChatNodeTransitionInfo; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_EED1D87C81F7C2A6_METHOD_1_03B1BF2F2F8589FD_OFFSET UNITYSDK_OFFSET(0x13C9BBC0)
#define CLASS_1_EED1D87C81F7C2A6_METHOD_1_128774387667156B_OFFSET UNITYSDK_OFFSET(0x13C9C450)
#define CLASS_1_EED1D87C81F7C2A6_METHOD_1_18982EFD3B740683_OFFSET UNITYSDK_OFFSET(0x13C9BD60)
#define CLASS_1_EED1D87C81F7C2A6_METHOD_1_3CCA0B8A31B650A8_OFFSET UNITYSDK_OFFSET(0x13C9BE90)
#define CLASS_1_EED1D87C81F7C2A6_METHOD_1_921C3C3E09D59CD4_OFFSET UNITYSDK_OFFSET(0x13C9BC00)
#define CLASS_1_EED1D87C81F7C2A6_METHOD_1_940B3F0997F915B8_OFFSET UNITYSDK_OFFSET(0x13C9C230)
#define CLASS_1_EED1D87C81F7C2A6_METHOD_1_B501FD3352312876_OFFSET UNITYSDK_OFFSET(0x13C9C010)
#define CLASS_1_EED1D87C81F7C2A6_METHOD_1_C225C501A02569DB_OFFSET UNITYSDK_OFFSET(0x13C9C320)
#define CLASS_1_EED1D87C81F7C2A6_METHOD_1_CF3AF79A95F797F5_OFFSET UNITYSDK_OFFSET(0x13C9C3B0)
#define CLASS_1_EED1D87C81F7C2A6__CTOR_OFFSET UNITYSDK_OFFSET(0x13C9BA50)

inline static constexpr unsigned int Class_1_EED1D87C81F7C2A6_TypeDefinitionIndex = 64723;

class Class_1_EED1D87C81F7C2A6 : public ::System::Object
{
public:
	::Class_1_CF8B0DC37DFDE560* Field_1_0; // 0x10
	::RPG::GameCore::MunicipalChatNodeInfo* Field_1_1; // 0x18
	::System::Collections::Generic::List_1<::Class_1_E8293664BB5E691F*>* Field_1_2; // 0x20

	::System::Void _ctor(::Class_1_CF8B0DC37DFDE560* a1, ::RPG::GameCore::MunicipalChatNodeInfo* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_CF8B0DC37DFDE560*, ::RPG::GameCore::MunicipalChatNodeInfo*))((::PBYTE)hIl2Cpp + CLASS_1_EED1D87C81F7C2A6__CTOR_OFFSET))(this, a1, a2);
	}

	static ::System::Void Method_1_03B1BF2F2F8589FD(::System::String* a1)
	{
		return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_EED1D87C81F7C2A6_METHOD_1_03B1BF2F2F8589FD_OFFSET))(a1);
	}

	::System::Void Method_1_921C3C3E09D59CD4()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_EED1D87C81F7C2A6_METHOD_1_921C3C3E09D59CD4_OFFSET))(this);
	}

	::System::Void Method_1_18982EFD3B740683()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_EED1D87C81F7C2A6_METHOD_1_18982EFD3B740683_OFFSET))(this);
	}

	::System::Void Method_1_3CCA0B8A31B650A8()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_EED1D87C81F7C2A6_METHOD_1_3CCA0B8A31B650A8_OFFSET))(this);
	}

	::System::Void Method_1_B501FD3352312876(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_EED1D87C81F7C2A6_METHOD_1_B501FD3352312876_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_940B3F0997F915B8(::RPG::GameCore::MunicipalChatNodeTransitionInfo*& a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::MunicipalChatNodeTransitionInfo*&))((::PBYTE)hIl2Cpp + CLASS_1_EED1D87C81F7C2A6_METHOD_1_940B3F0997F915B8_OFFSET))(this, a1);
	}

	::RPG::GameCore::GameEntity* Method_1_C225C501A02569DB(::System::String* a1)
	{
		return ((::RPG::GameCore::GameEntity*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_EED1D87C81F7C2A6_METHOD_1_C225C501A02569DB_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_CF3AF79A95F797F5(::System::Int32 a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_EED1D87C81F7C2A6_METHOD_1_CF3AF79A95F797F5_OFFSET))(this, a1);
	}

	::System::String* Method_1_128774387667156B()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_EED1D87C81F7C2A6_METHOD_1_128774387667156B_OFFSET))(this);
	}
};
