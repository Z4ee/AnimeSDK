#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_44C800F73E4F1D6F;
class Class_1_9E75A6F37EAB58DE;
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine::UI { class Text; }

#define RPG_CLIENT_BATTLERESULAUTODECOMPOSEINFO_GETDECOMPOSEDELEMENT_OFFSET UNITYSDK_OFFSET(0x19FB3EC0)
#define RPG_CLIENT_BATTLERESULAUTODECOMPOSEINFO_HASITEMDECOMPOSED_OFFSET UNITYSDK_OFFSET(0x19FB3A40)
#define RPG_CLIENT_BATTLERESULAUTODECOMPOSEINFO_ISITEMDECOMPOSED_OFFSET UNITYSDK_OFFSET(0x19FB3980)
#define RPG_CLIENT_BATTLERESULAUTODECOMPOSEINFO_MERGE_OFFSET UNITYSDK_OFFSET(0x19FB36C0)
#define RPG_CLIENT_BATTLERESULAUTODECOMPOSEINFO_SETREWARDCOMPOSEDESCTEXT_OFFSET UNITYSDK_OFFSET(0x19FB3AA0)
#define RPG_CLIENT_BATTLERESULAUTODECOMPOSEINFO_SYNC_OFFSET UNITYSDK_OFFSET(0x19FB3490)
#define RPG_CLIENT_BATTLERESULAUTODECOMPOSEINFO__CCTOR_OFFSET UNITYSDK_OFFSET(0x19FB3F60)
#define RPG_CLIENT_BATTLERESULAUTODECOMPOSEINFO__CTOR_OFFSET UNITYSDK_OFFSET(0x19FB3410)

namespace RPG::Client
{
	inline static constexpr unsigned int BattleResulAutoDecomposeInfo_TypeDefinitionIndex = 60106;

	class BattleResulAutoDecomposeInfo : public ::System::Object
	{
	public:
		static ::RPG::Client::BattleResulAutoDecomposeInfo** StaticGet_DefaultDecomposeInfo()
		{
			return (::RPG::Client::BattleResulAutoDecomposeInfo**)Il2CppClass::FromTypeDefinitionIndex(BattleResulAutoDecomposeInfo_TypeDefinitionIndex)->GetStaticField(0x5A9B0);
		}
		::System::Collections::Generic::List_1<::Class_1_9E75A6F37EAB58DE*>* DecomposeElements; // 0x10
		::System::Collections::Generic::List_1<::System::UInt32>* DecomposedRelicIDs; // 0x18
		::System::Boolean IsExceedLimit; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLERESULAUTODECOMPOSEINFO__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLERESULAUTODECOMPOSEINFO__CCTOR_OFFSET))();
		}

		::System::Void Sync(::Class_1_44C800F73E4F1D6F* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_44C800F73E4F1D6F*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLERESULAUTODECOMPOSEINFO_SYNC_OFFSET))(this, a1);
		}

		::System::Void Merge(::RPG::Client::BattleResulAutoDecomposeInfo* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::BattleResulAutoDecomposeInfo*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLERESULAUTODECOMPOSEINFO_MERGE_OFFSET))(this, a1);
		}

		::System::Boolean IsItemDecomposed(::System::UInt32 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLERESULAUTODECOMPOSEINFO_ISITEMDECOMPOSED_OFFSET))(this, a1);
		}

		::System::Boolean HasItemDecomposed()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLERESULAUTODECOMPOSEINFO_HASITEMDECOMPOSED_OFFSET))(this);
		}

		::System::Void SetRewardComposeDescText(::UnityEngine::UI::Text* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::UI::Text*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLERESULAUTODECOMPOSEINFO_SETREWARDCOMPOSEDESCTEXT_OFFSET))(this, a1);
		}

		::Class_1_9E75A6F37EAB58DE* GetDecomposedElement(::System::UInt32 a1)
		{
			return ((::Class_1_9E75A6F37EAB58DE*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLERESULAUTODECOMPOSEINFO_GETDECOMPOSEDELEMENT_OFFSET))(this, a1);
		}
	};
}
