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

#define CLASS_1_EED1D87C81F7C2A6_METHOD_1_03B1BF2F2F8589FD_OFFSET UNITYSDK_OFFSET(0x18A04F70)
#define CLASS_1_EED1D87C81F7C2A6_METHOD_1_128774387667156B_OFFSET UNITYSDK_OFFSET(0x18A05B00)
#define CLASS_1_EED1D87C81F7C2A6_METHOD_1_283DA224BE06DA9F_OFFSET UNITYSDK_OFFSET(0x18A04FB0)
#define CLASS_1_EED1D87C81F7C2A6_METHOD_1_45AA2F5085C2C40D_OFFSET UNITYSDK_OFFSET(0x18A05340)
#define CLASS_1_EED1D87C81F7C2A6_METHOD_1_940B3F0997F915B8_OFFSET UNITYSDK_OFFSET(0x18A058E0)
#define CLASS_1_EED1D87C81F7C2A6_METHOD_1_A0B822F08B34B978_OFFSET UNITYSDK_OFFSET(0x18A055B0)
#define CLASS_1_EED1D87C81F7C2A6_METHOD_1_B961D33AD47A2113_OFFSET UNITYSDK_OFFSET(0x18A05190)
#define CLASS_1_EED1D87C81F7C2A6_METHOD_1_C225C501A02569DB_OFFSET UNITYSDK_OFFSET(0x18A059D0)
#define CLASS_1_EED1D87C81F7C2A6_METHOD_1_CF3AF79A95F797F5_OFFSET UNITYSDK_OFFSET(0x18A05A60)
#define CLASS_1_EED1D87C81F7C2A6__CTOR_OFFSET UNITYSDK_OFFSET(0x18A04E00)

inline static constexpr unsigned int Class_1_EED1D87C81F7C2A6_TypeDefinitionIndex = 69164;

class Class_1_EED1D87C81F7C2A6 : public ::System::Object
{
public:
	::RPG::GameCore::MunicipalChatNodeInfo* EJJEEJENLDA; // 0x10
	::Class_1_CF8B0DC37DFDE560* MIPMCEJIAMC; // 0x18
	::System::Collections::Generic::List_1<::Class_1_E8293664BB5E691F*>* PADIDNAAMON; // 0x20

	::System::Void _ctor(::Class_1_CF8B0DC37DFDE560* a1, ::RPG::GameCore::MunicipalChatNodeInfo* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_CF8B0DC37DFDE560*, ::RPG::GameCore::MunicipalChatNodeInfo*))((::PBYTE)hIl2Cpp + CLASS_1_EED1D87C81F7C2A6__CTOR_OFFSET))(this, a1, a2);
	}

	static ::System::Void Method_1_03B1BF2F2F8589FD(::System::String* a1)
	{
		return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_EED1D87C81F7C2A6_METHOD_1_03B1BF2F2F8589FD_OFFSET))(a1);
	}

	::System::Void Method_1_283DA224BE06DA9F()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_EED1D87C81F7C2A6_METHOD_1_283DA224BE06DA9F_OFFSET))(this);
	}

	::System::Void Method_1_B961D33AD47A2113()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_EED1D87C81F7C2A6_METHOD_1_B961D33AD47A2113_OFFSET))(this);
	}

	::System::Void Method_1_45AA2F5085C2C40D()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_EED1D87C81F7C2A6_METHOD_1_45AA2F5085C2C40D_OFFSET))(this);
	}

	::System::Void Method_1_A0B822F08B34B978(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_EED1D87C81F7C2A6_METHOD_1_A0B822F08B34B978_OFFSET))(this, a1);
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
