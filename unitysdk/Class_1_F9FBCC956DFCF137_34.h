#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/MechCraft/MechCraftEffectType.h"
#include "unitysdk/System/Object.h"

class Class_1_04F54F1AFB979327;
namespace System::Collections::Generic { template <typename T> class IReadOnlyList_1; }

#define CLASS_1_F9FBCC956DFCF137_34_GET_CACHEKEY_OFFSET UNITYSDK_OFFSET(0xB8FEF20)
#define CLASS_1_F9FBCC956DFCF137_34_METHOD_1_0925DC470EB994F8_OFFSET UNITYSDK_OFFSET(0xB8FEFC0)
#define CLASS_1_F9FBCC956DFCF137_34_METHOD_1_A6573DCDC9ED6EA3_OFFSET UNITYSDK_OFFSET(0xB8FEF70)
#define CLASS_1_F9FBCC956DFCF137_34__CTOR_OFFSET UNITYSDK_OFFSET(0xB8FF010)

inline static constexpr unsigned int Class_1_F9FBCC956DFCF137_34_TypeDefinitionIndex = 80105;

class Class_1_F9FBCC956DFCF137_34 : public ::System::Object
{
public:
	::Class_1_04F54F1AFB979327* IBPBJBOKKMF; // 0x10

	::System::Void _ctor(::Class_1_04F54F1AFB979327* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_04F54F1AFB979327*))((::PBYTE)hIl2Cpp + CLASS_1_F9FBCC956DFCF137_34__CTOR_OFFSET))(this, a1);
	}

	::System::Int32 get_CacheKey()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F9FBCC956DFCF137_34_GET_CACHEKEY_OFFSET))(this);
	}

	::RPG::Client::MechCraft::MechCraftEffectType Method_1_A6573DCDC9ED6EA3()
	{
		return ((::RPG::Client::MechCraft::MechCraftEffectType(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F9FBCC956DFCF137_34_METHOD_1_A6573DCDC9ED6EA3_OFFSET))(this);
	}

	::System::Collections::Generic::IReadOnlyList_1<::System::Int32>* Method_1_0925DC470EB994F8()
	{
		return ((::System::Collections::Generic::IReadOnlyList_1<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F9FBCC956DFCF137_34_METHOD_1_0925DC470EB994F8_OFFSET))(this);
	}
};
