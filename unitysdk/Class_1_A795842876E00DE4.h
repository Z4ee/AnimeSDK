#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_72B8F0CA34E4DCF6;
class Class_1_E8293664BB5E691F;
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class MunicipalChatNodeInfo; }
namespace RPG::GameCore { class MunicipalChatNodeTransitionInfo; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_A795842876E00DE4_METHOD_1_03B1BF2F2F8589FD_OFFSET UNITYSDK_OFFSET(0x10A41FF0)
#define CLASS_1_A795842876E00DE4_METHOD_1_128774387667156B_OFFSET UNITYSDK_OFFSET(0x10A42790)
#define CLASS_1_A795842876E00DE4_METHOD_1_4EA6B1791DACA9CC_OFFSET UNITYSDK_OFFSET(0x10A42280)
#define CLASS_1_A795842876E00DE4_METHOD_1_508D4DD02D3DB74E_OFFSET UNITYSDK_OFFSET(0x10A42170)
#define CLASS_1_A795842876E00DE4_METHOD_1_940B3F0997F915B8_OFFSET UNITYSDK_OFFSET(0x10A42590)
#define CLASS_1_A795842876E00DE4_METHOD_1_C04AC763228297F7_OFFSET UNITYSDK_OFFSET(0x10A423D0)
#define CLASS_1_A795842876E00DE4_METHOD_1_C225C501A02569DB_OFFSET UNITYSDK_OFFSET(0x10A42680)
#define CLASS_1_A795842876E00DE4_METHOD_1_E167CC791D3371F7_OFFSET UNITYSDK_OFFSET(0x10A42710)
#define CLASS_1_A795842876E00DE4_METHOD_1_F978A1D172468895_OFFSET UNITYSDK_OFFSET(0x10A42030)
#define CLASS_1_A795842876E00DE4__CTOR_OFFSET UNITYSDK_OFFSET(0x10A41F00)

inline static constexpr unsigned int Class_1_A795842876E00DE4_TypeDefinitionIndex = 56558;

class Class_1_A795842876E00DE4 : public ::System::Object
{
public:
	::Class_1_72B8F0CA34E4DCF6* Field_1_0; // 0x10
	::RPG::GameCore::MunicipalChatNodeInfo* Field_1_1; // 0x18
	::System::Collections::Generic::List_1<::Class_1_E8293664BB5E691F*>* Field_1_2; // 0x20

	::System::Void _ctor(::Class_1_72B8F0CA34E4DCF6* a1, ::RPG::GameCore::MunicipalChatNodeInfo* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_72B8F0CA34E4DCF6*, ::RPG::GameCore::MunicipalChatNodeInfo*))((::PBYTE)hIl2Cpp + CLASS_1_A795842876E00DE4__CTOR_OFFSET))(this, a1, a2);
	}

	static ::System::Void Method_1_03B1BF2F2F8589FD(::System::String* a1)
	{
		return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_A795842876E00DE4_METHOD_1_03B1BF2F2F8589FD_OFFSET))(a1);
	}

	::System::Void Method_1_F978A1D172468895()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A795842876E00DE4_METHOD_1_F978A1D172468895_OFFSET))(this);
	}

	::System::Void Method_1_508D4DD02D3DB74E()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A795842876E00DE4_METHOD_1_508D4DD02D3DB74E_OFFSET))(this);
	}

	::System::Void Method_1_4EA6B1791DACA9CC()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A795842876E00DE4_METHOD_1_4EA6B1791DACA9CC_OFFSET))(this);
	}

	::System::Void Method_1_C04AC763228297F7(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_A795842876E00DE4_METHOD_1_C04AC763228297F7_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_940B3F0997F915B8(::RPG::GameCore::MunicipalChatNodeTransitionInfo*& a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::MunicipalChatNodeTransitionInfo*&))((::PBYTE)hIl2Cpp + CLASS_1_A795842876E00DE4_METHOD_1_940B3F0997F915B8_OFFSET))(this, a1);
	}

	::RPG::GameCore::GameEntity* Method_1_C225C501A02569DB(::System::String* a1)
	{
		return ((::RPG::GameCore::GameEntity*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_A795842876E00DE4_METHOD_1_C225C501A02569DB_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_E167CC791D3371F7(::System::Int32 a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_A795842876E00DE4_METHOD_1_E167CC791D3371F7_OFFSET))(this, a1);
	}

	::System::String* Method_1_128774387667156B()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A795842876E00DE4_METHOD_1_128774387667156B_OFFSET))(this);
	}
};
