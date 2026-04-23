#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/OpenWorld/BlockVisionState.h"
#include "unitysdk/RPG/GameCore/RegionBlockVisibilityStatus.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

class Class_1_303D5A33D1401D59;
class Class_1_ECBCF86CDE61CBCA;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_303D5A33D1401D59_CLASS_5_8E6E78C80F78DF20_GET_ISVISIBLE_OFFSET UNITYSDK_OFFSET(0x119CC680)
#define CLASS_1_303D5A33D1401D59_CLASS_5_8E6E78C80F78DF20_GET_REGIONBLOCKVISIBILITYSTATUS_OFFSET UNITYSDK_OFFSET(0x119CC720)
#define CLASS_1_303D5A33D1401D59_CLASS_5_8E6E78C80F78DF20_INIT_OFFSET UNITYSDK_OFFSET(0x119CBEE0)
#define CLASS_1_303D5A33D1401D59_CLASS_5_8E6E78C80F78DF20_UPDATE_OFFSET UNITYSDK_OFFSET(0x119CBF30)
#define CLASS_1_303D5A33D1401D59_CLASS_5_8E6E78C80F78DF20__CTOR_OFFSET UNITYSDK_OFFSET(0x119CC780)

inline static constexpr unsigned int Class_1_303D5A33D1401D59_Class_5_8E6E78C80F78DF20_TypeDefinitionIndex = 68024;

class Class_1_303D5A33D1401D59_Class_5_8E6E78C80F78DF20 : public ::UnityEngine::MonoBehaviour
{
public:
	::Class_1_303D5A33D1401D59* Field_5_0; // 0x18
	::RPG::Client::OpenWorld::BlockVisionState BlockVisionState; // 0x20
	::RPG::GameCore::RegionBlockVisibilityStatus BlockRegionVisStatus; // 0x24
	::System::Single LoadingRate; // 0x28
	::System::Collections::Generic::List_1<::System::String*>* InVisibleReason; // 0x30
	::System::UInt64 Field_5_5; // 0x38
	::System::Collections::Generic::List_1<::System::String*>* ForceHideReason; // 0x40
	::System::UInt64 Field_5_7; // 0x48
	::System::Collections::Generic::List_1<::System::String*>* ForceHLODReason; // 0x50

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_303D5A33D1401D59_CLASS_5_8E6E78C80F78DF20__CTOR_OFFSET))(this);
	}

	::System::Void Init(::Class_1_303D5A33D1401D59* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_303D5A33D1401D59*))((::PBYTE)hIl2Cpp + CLASS_1_303D5A33D1401D59_CLASS_5_8E6E78C80F78DF20_INIT_OFFSET))(this, a1);
	}

	::System::Void Update()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_303D5A33D1401D59_CLASS_5_8E6E78C80F78DF20_UPDATE_OFFSET))(this);
	}

	::System::Boolean get_IsVisible()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_303D5A33D1401D59_CLASS_5_8E6E78C80F78DF20_GET_ISVISIBLE_OFFSET))(this);
	}

	::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::Class_1_ECBCF86CDE61CBCA*>*>*>* get_RegionBlockVisibilityStatus()
	{
		return ((::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::Class_1_ECBCF86CDE61CBCA*>*>*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_303D5A33D1401D59_CLASS_5_8E6E78C80F78DF20_GET_REGIONBLOCKVISIBILITYSTATUS_OFFSET))(this);
	}
};
