#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/ScriptableObject.h"

namespace RPG::Client { class AssetsPathDict; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_ASSETSPATHCONFIG_METHOD_3_2CBE0B79DD36047E_OFFSET UNITYSDK_OFFSET(0x19B33C00)
#define RPG_CLIENT_ASSETSPATHCONFIG_METHOD_3_3543E185ADE7267F_1_OFFSET UNITYSDK_OFFSET(0x19B341E0)
#define RPG_CLIENT_ASSETSPATHCONFIG_METHOD_3_3543E185ADE7267F_OFFSET UNITYSDK_OFFSET(0x19B34050)
#define RPG_CLIENT_ASSETSPATHCONFIG_METHOD_3_8830D8EC8431D81A_OFFSET UNITYSDK_OFFSET(0x19B34120)
#define RPG_CLIENT_ASSETSPATHCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x19B342B0)

namespace RPG::Client
{
	inline static constexpr unsigned int AssetsPathConfig_TypeDefinitionIndex = 57350;

	class AssetsPathConfig : public ::UnityEngine::ScriptableObject
	{
	public:
		::System::Collections::Generic::List_1<::RPG::Client::AssetsPathDict*>* AssemNPCModelPath; // 0x18
		::System::Collections::Generic::List_1<::RPG::Client::AssetsPathDict*>* AssemNPCMaterialPath; // 0x20
		::System::Collections::Generic::Dictionary_2<::System::String*, ::RPG::Client::AssetsPathDict*>* AssemNPCModelPathDicts; // 0x28
		::System::Collections::Generic::Dictionary_2<::System::String*, ::RPG::Client::AssetsPathDict*>* AssemNPCMaterialPathDicts; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ASSETSPATHCONFIG__CTOR_OFFSET))(this);
		}

		::System::Void Method_3_2CBE0B79DD36047E()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ASSETSPATHCONFIG_METHOD_3_2CBE0B79DD36047E_OFFSET))(this);
		}

		::System::String* Method_3_3543E185ADE7267F(::System::String* a1)
		{
			return ((::System::String*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ASSETSPATHCONFIG_METHOD_3_3543E185ADE7267F_OFFSET))(this, a1);
		}

		::RPG::Client::AssetsPathDict* Method_3_8830D8EC8431D81A(::System::String* a1)
		{
			return ((::RPG::Client::AssetsPathDict*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ASSETSPATHCONFIG_METHOD_3_8830D8EC8431D81A_OFFSET))(this, a1);
		}

		::System::String* Method_3_3543E185ADE7267F_1(::System::String* a1)
		{
			return ((::System::String*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ASSETSPATHCONFIG_METHOD_3_3543E185ADE7267F_1_OFFSET))(this, a1);
		}
	};
}
