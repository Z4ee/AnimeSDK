#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_47C4886CB6C61234.h"

class Class_2_B110E8EDA73E9541_Class_1_8C2C52864F506F61;
class Class_2_B110E8EDA73E9541_Class_1_CD29281E05E9EA13;
namespace RPG::GameCore { class GameEntity; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_2_B110E8EDA73E9541_METHOD_2_42BDEFA7F0F2EE43_OFFSET UNITYSDK_OFFSET(0x1095CBB0)
#define CLASS_2_B110E8EDA73E9541_METHOD_2_B4AE43E8F4098E00_OFFSET UNITYSDK_OFFSET(0x1095C200)
#define CLASS_2_B110E8EDA73E9541_METHOD_2_E0D740F84E7EA2AB_OFFSET UNITYSDK_OFFSET(0x1095CDB0)
#define CLASS_2_B110E8EDA73E9541_METHOD_2_FBBD7128B7B1E99F_OFFSET UNITYSDK_OFFSET(0x1095C920)
#define CLASS_2_B110E8EDA73E9541_ONINIT_OFFSET UNITYSDK_OFFSET(0x1095C0D0)
#define CLASS_2_B110E8EDA73E9541_ONUNINIT_OFFSET UNITYSDK_OFFSET(0x1095C110)
#define CLASS_2_B110E8EDA73E9541__CTOR_OFFSET UNITYSDK_OFFSET(0x1095CF60)
#define CLASS_2_B110E8EDA73E9541___IFIXBASEPROXY_ONINIT_OFFSET UNITYSDK_OFFSET(0x1095D040)
#define CLASS_2_B110E8EDA73E9541___IFIXBASEPROXY_ONUNINIT_OFFSET UNITYSDK_OFFSET(0x1095D0A0)

inline static constexpr unsigned int Class_2_B110E8EDA73E9541_TypeDefinitionIndex = 60102;

class Class_2_B110E8EDA73E9541 : public ::Class_1_47C4886CB6C61234
{
public:
	::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* Field_2_2; // 0x20
	::System::Collections::Generic::Dictionary_2<::RPG::GameCore::GameEntity*, ::Class_2_B110E8EDA73E9541_Class_1_8C2C52864F506F61*>* Field_2_1; // 0x28
	::System::Collections::Generic::List_1<::Class_2_B110E8EDA73E9541_Class_1_CD29281E05E9EA13*>* Field_2_0; // 0x30
	::System::Boolean Field_2_3; // 0x38
	::System::Boolean Field_2_4; // 0x39

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B110E8EDA73E9541__CTOR_OFFSET))(this);
	}

	::System::Void OnInit()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B110E8EDA73E9541_ONINIT_OFFSET))(this);
	}

	::System::Void OnUninit()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B110E8EDA73E9541_ONUNINIT_OFFSET))(this);
	}

	::System::Void Method_2_FBBD7128B7B1E99F(::System::String* a1, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* a2, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* a3, ::System::Int32 a4, ::System::Single a5)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>*, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>*, ::System::Int32, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_B110E8EDA73E9541_METHOD_2_FBBD7128B7B1E99F_OFFSET))(this, a1, a2, a3, a4, a5);
	}

	::System::Void Method_2_42BDEFA7F0F2EE43(::System::String* a1, ::System::Single a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_B110E8EDA73E9541_METHOD_2_42BDEFA7F0F2EE43_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_B4AE43E8F4098E00(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_B110E8EDA73E9541_METHOD_2_B4AE43E8F4098E00_OFFSET))(this, a1);
	}

	::Class_2_B110E8EDA73E9541_Class_1_8C2C52864F506F61* Method_2_E0D740F84E7EA2AB(::RPG::GameCore::GameEntity* a1, ::System::Boolean a2)
	{
		return ((::Class_2_B110E8EDA73E9541_Class_1_8C2C52864F506F61*(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_B110E8EDA73E9541_METHOD_2_E0D740F84E7EA2AB_OFFSET))(this, a1, a2);
	}

	::System::Void __iFixBaseProxy_OnInit()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B110E8EDA73E9541___IFIXBASEPROXY_ONINIT_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy_OnUninit()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B110E8EDA73E9541___IFIXBASEPROXY_ONUNINIT_OFFSET))(this);
	}
};
