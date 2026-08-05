#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ENPCAvatarGender.h"
#include "unitysdk/ENPCAvatarSize.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ValueTuple_2.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define NPCCROWD_ANIMATION_CROWDUNITTESTBASE_GETANYNPCTAGID_1_OFFSET UNITYSDK_OFFSET(0x157B7260)
#define NPCCROWD_ANIMATION_CROWDUNITTESTBASE_GETANYNPCTAGID_OFFSET UNITYSDK_OFFSET(0x157B6FB0)
#define NPCCROWD_ANIMATION_CROWDUNITTESTBASE_GETANYPREFABIDWHICHOWNACCESSORY_OFFSET UNITYSDK_OFFSET(0x157B73D0)
#define NPCCROWD_ANIMATION_CROWDUNITTESTBASE_GETCROWDNPCTESTCASES_OFFSET UNITYSDK_OFFSET(0x157B7610)
#define NPCCROWD_ANIMATION_CROWDUNITTESTBASE_GET_UNITTESTCASENAME_OFFSET UNITYSDK_OFFSET(0x157B69F0)
#define NPCCROWD_ANIMATION_CROWDUNITTESTBASE_INIT_OFFSET UNITYSDK_OFFSET(0x157B6A30)
#define NPCCROWD_ANIMATION_CROWDUNITTESTBASE__CCTOR_OFFSET UNITYSDK_OFFSET(0x157B76A0)
#define NPCCROWD_ANIMATION_CROWDUNITTESTBASE__CTOR_OFFSET UNITYSDK_OFFSET(0x157B7690)

namespace NPCCrowd::Animation
{
	inline static constexpr unsigned int CrowdUnitTestBase_TypeDefinitionIndex = 80637;

	class CrowdUnitTestBase : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Int32>** StaticGet_cacheTagCrowdPrefabsDic()
		{
			return (::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(CrowdUnitTestBase_TypeDefinitionIndex)->GetStaticField(0x40FB0);
		}
		static ::System::Collections::Generic::HashSet_1<::System::Int32>** StaticGet_allAvatarParams()
		{
			return (::System::Collections::Generic::HashSet_1<::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(CrowdUnitTestBase_TypeDefinitionIndex)->GetStaticField(0x40FB8);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_CROWDUNITTESTBASE__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_CROWDUNITTESTBASE__CCTOR_OFFSET))();
		}

		::System::String* get_UnitTestCaseName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_CROWDUNITTESTBASE_GET_UNITTESTCASENAME_OFFSET))(this);
		}

		static ::System::Void Init()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_CROWDUNITTESTBASE_INIT_OFFSET))();
		}

		::System::UInt32 GetAnyNpcTagId(::ENPCAvatarGender gender, ::ENPCAvatarSize size)
		{
			return ((::System::UInt32(*)(::PVOID, ::ENPCAvatarGender, ::ENPCAvatarSize))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_CROWDUNITTESTBASE_GETANYNPCTAGID_OFFSET))(this, gender, size);
		}

		::System::UInt32 GetAnyNpcTagId_1(::System::Int32 prefabId)
		{
			return ((::System::UInt32(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_CROWDUNITTESTBASE_GETANYNPCTAGID_1_OFFSET))(this, prefabId);
		}

		::System::Int32 GetAnyPrefabIdWhichOwnAccessory(::System::String* ownAccessoryItemName)
		{
			return ((::System::Int32(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_CROWDUNITTESTBASE_GETANYPREFABIDWHICHOWNACCESSORY_OFFSET))(this, ownAccessoryItemName);
		}

		::System::Collections::Generic::List_1<::System::ValueTuple_2<::System::UInt32, ::System::Int32>>* GetCrowdNpcTestCases()
		{
			return ((::System::Collections::Generic::List_1<::System::ValueTuple_2<::System::UInt32, ::System::Int32>>*(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_CROWDUNITTESTBASE_GETCROWDNPCTESTCASES_OFFSET))(this);
		}
	};
}
