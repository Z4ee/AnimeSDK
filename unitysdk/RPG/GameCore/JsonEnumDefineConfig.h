#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
#include "unitysdk/RPG/GameCore/JsonEnumCategory.h"
#include "unitysdk/System/ValueTuple_2.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class JsonEnum; }
namespace RPG::GameCore { class JsonEnumConfig; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_GAMECORE_JSONENUMDEFINECONFIG_METHOD_2_2BA22A36D9531E3B_OFFSET UNITYSDK_OFFSET(0x18A37D50)
#define RPG_GAMECORE_JSONENUMDEFINECONFIG_METHOD_2_68C421496E2EDEFA_OFFSET UNITYSDK_OFFSET(0x18A36B50)
#define RPG_GAMECORE_JSONENUMDEFINECONFIG_METHOD_2_832295EC279E5994_OFFSET UNITYSDK_OFFSET(0x18A37C70)
#define RPG_GAMECORE_JSONENUMDEFINECONFIG_METHOD_2_9F0F8384D37C2928_OFFSET UNITYSDK_OFFSET(0x18A378B0)
#define RPG_GAMECORE_JSONENUMDEFINECONFIG_METHOD_2_A5058F1AD6A80A4F_OFFSET UNITYSDK_OFFSET(0x18A37A00)
#define RPG_GAMECORE_JSONENUMDEFINECONFIG_METHOD_2_AA898FBD7F83FC17_OFFSET UNITYSDK_OFFSET(0x18A37CE0)
#define RPG_GAMECORE_JSONENUMDEFINECONFIG_METHOD_2_B8FB6B3CC6BD8AED_OFFSET UNITYSDK_OFFSET(0x18A37DF0)
#define RPG_GAMECORE_JSONENUMDEFINECONFIG_METHOD_2_E25FE014C1FEE4E2_OFFSET UNITYSDK_OFFSET(0x18A37C80)
#define RPG_GAMECORE_JSONENUMDEFINECONFIG_METHOD_2_E56E38A5413D7427_OFFSET UNITYSDK_OFFSET(0x18A37160)
#define RPG_GAMECORE_JSONENUMDEFINECONFIG_METHOD_2_F08A2AF4B0963EB9_OFFSET UNITYSDK_OFFSET(0x18A36DC0)
#define RPG_GAMECORE_JSONENUMDEFINECONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x18A379F0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int JsonEnumDefineConfig_TypeDefinitionIndex = 16215;

	class JsonEnumDefineConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::Collections::Generic::Dictionary_2<::RPG::GameCore::JsonEnumCategory, ::RPG::GameCore::JsonEnumConfig*>* ConfigList; // 0x10
		::Il2CppArray<::RPG::GameCore::JsonEnumConfig*>* _ConfigCategoryArr; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_JSONENUMDEFINECONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_9F0F8384D37C2928(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::JsonEnumDefineConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::JsonEnumDefineConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_JSONENUMDEFINECONFIG_METHOD_2_9F0F8384D37C2928_OFFSET))(a1, a2);
		}

		::System::Void Method_2_A5058F1AD6A80A4F()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_JSONENUMDEFINECONFIG_METHOD_2_A5058F1AD6A80A4F_OFFSET))(this);
		}

		::System::Void Method_2_832295EC279E5994()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_JSONENUMDEFINECONFIG_METHOD_2_832295EC279E5994_OFFSET))(this);
		}

		::RPG::GameCore::JsonEnum* Method_2_68C421496E2EDEFA(::System::Int32 a1, ::System::Int32 a2)
		{
			return ((::RPG::GameCore::JsonEnum*(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_JSONENUMDEFINECONFIG_METHOD_2_68C421496E2EDEFA_OFFSET))(this, a1, a2);
		}

		::System::ValueTuple_2<::System::Int32, ::System::Int32> Method_2_F08A2AF4B0963EB9(::System::String* a1)
		{
			return ((::System::ValueTuple_2<::System::Int32, ::System::Int32>(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_JSONENUMDEFINECONFIG_METHOD_2_F08A2AF4B0963EB9_OFFSET))(this, a1);
		}

		::System::String* Method_2_E25FE014C1FEE4E2(::RPG::GameCore::JsonEnumCategory a1, ::System::Int32 a2)
		{
			return ((::System::String*(*)(::PVOID, ::RPG::GameCore::JsonEnumCategory, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_JSONENUMDEFINECONFIG_METHOD_2_E25FE014C1FEE4E2_OFFSET))(this, a1, a2);
		}

		::System::Int32 Method_2_E56E38A5413D7427(::RPG::GameCore::JsonEnumCategory a1, ::RPG::GameCore::JsonEnum* a2)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::GameCore::JsonEnumCategory, ::RPG::GameCore::JsonEnum*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_JSONENUMDEFINECONFIG_METHOD_2_E56E38A5413D7427_OFFSET))(this, a1, a2);
		}

		::System::Int32 Method_2_AA898FBD7F83FC17(::RPG::GameCore::JsonEnumCategory a1, ::System::String* a2)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::GameCore::JsonEnumCategory, ::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_JSONENUMDEFINECONFIG_METHOD_2_AA898FBD7F83FC17_OFFSET))(this, a1, a2);
		}

		::System::Boolean Method_2_2BA22A36D9531E3B(::RPG::GameCore::JsonEnumCategory a1, ::System::String* a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::JsonEnumCategory, ::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_JSONENUMDEFINECONFIG_METHOD_2_2BA22A36D9531E3B_OFFSET))(this, a1, a2);
		}

		::System::Boolean Method_2_B8FB6B3CC6BD8AED(::RPG::GameCore::JsonEnumCategory a1, ::System::String* a2, ::System::Int32& a3)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::JsonEnumCategory, ::System::String*, ::System::Int32&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_JSONENUMDEFINECONFIG_METHOD_2_B8FB6B3CC6BD8AED_OFFSET))(this, a1, a2, a3);
		}
	};
}
