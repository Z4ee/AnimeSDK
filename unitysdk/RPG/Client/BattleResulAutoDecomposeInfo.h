#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_3FBC3A9231495828;
class Class_1_9E75A6F37EAB58DE;
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine::UI { class Text; }

#define RPG_CLIENT_BATTLERESULAUTODECOMPOSEINFO_GETDECOMPOSEDELEMENT_OFFSET UNITYSDK_OFFSET(0x9E75340)
#define RPG_CLIENT_BATTLERESULAUTODECOMPOSEINFO_HASITEMDECOMPOSED_OFFSET UNITYSDK_OFFSET(0x9E74CE0)
#define RPG_CLIENT_BATTLERESULAUTODECOMPOSEINFO_ISITEMDECOMPOSED_OFFSET UNITYSDK_OFFSET(0x9E74C80)
#define RPG_CLIENT_BATTLERESULAUTODECOMPOSEINFO_MERGE_OFFSET UNITYSDK_OFFSET(0x9E74A40)
#define RPG_CLIENT_BATTLERESULAUTODECOMPOSEINFO_SETREWARDCOMPOSEDESCTEXT_OFFSET UNITYSDK_OFFSET(0x9E74D40)
#define RPG_CLIENT_BATTLERESULAUTODECOMPOSEINFO_SYNC_OFFSET UNITYSDK_OFFSET(0x9E65190)
#define RPG_CLIENT_BATTLERESULAUTODECOMPOSEINFO__CCTOR_OFFSET UNITYSDK_OFFSET(0x9E753D0)
#define RPG_CLIENT_BATTLERESULAUTODECOMPOSEINFO__CTOR_OFFSET UNITYSDK_OFFSET(0x9E749C0)

namespace RPG::Client
{
	inline static constexpr unsigned int BattleResulAutoDecomposeInfo_TypeDefinitionIndex = 57919;

	class BattleResulAutoDecomposeInfo : public ::System::Object
	{
	public:
		static ::RPG::Client::BattleResulAutoDecomposeInfo** StaticGet_DefaultDecomposeInfo()
		{
			return (::RPG::Client::BattleResulAutoDecomposeInfo**)Il2CppClass::FromTypeDefinitionIndex(BattleResulAutoDecomposeInfo_TypeDefinitionIndex)->GetStaticField(0x40050);
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

		::System::Void Sync(::Class_1_3FBC3A9231495828* autoDecompose)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_3FBC3A9231495828*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLERESULAUTODECOMPOSEINFO_SYNC_OFFSET))(this, autoDecompose);
		}

		::System::Void Merge(::RPG::Client::BattleResulAutoDecomposeInfo* decomposeInfo)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::BattleResulAutoDecomposeInfo*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLERESULAUTODECOMPOSEINFO_MERGE_OFFSET))(this, decomposeInfo);
		}

		::System::Boolean IsItemDecomposed(::System::UInt32 UID)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLERESULAUTODECOMPOSEINFO_ISITEMDECOMPOSED_OFFSET))(this, UID);
		}

		::System::Boolean HasItemDecomposed()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLERESULAUTODECOMPOSEINFO_HASITEMDECOMPOSED_OFFSET))(this);
		}

		::System::Void SetRewardComposeDescText(::UnityEngine::UI::Text* textBlock)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::UI::Text*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLERESULAUTODECOMPOSEINFO_SETREWARDCOMPOSEDESCTEXT_OFFSET))(this, textBlock);
		}

		::Class_1_9E75A6F37EAB58DE* GetDecomposedElement(::System::UInt32 itemID)
		{
			return ((::Class_1_9E75A6F37EAB58DE*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLERESULAUTODECOMPOSEINFO_GETDECOMPOSEDELEMENT_OFFSET))(this, itemID);
		}
	};
}
