#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_43BD383C98B4C0C5_212.h"
#include "unitysdk/System/Nullable_1.h"

class Class_1_43BD383C98B4C0C5_213;
namespace RPG::GameCore { class BaseChimeraDuelEntitiesSelectorConfig; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_2_5EB97EDC6B57E120_GET_REPEATCOUNT_OFFSET UNITYSDK_OFFSET(0xC3B52A0)
#define CLASS_2_5EB97EDC6B57E120_METHOD_2_431734A3FF995186_OFFSET UNITYSDK_OFFSET(0xC3B5520)
#define CLASS_2_5EB97EDC6B57E120_METHOD_2_47A94975B0610A2C_OFFSET UNITYSDK_OFFSET(0xC3B52C0)
#define CLASS_2_5EB97EDC6B57E120_SET_REPEATCOUNT_OFFSET UNITYSDK_OFFSET(0xC3B52B0)
#define CLASS_2_5EB97EDC6B57E120__CTOR_OFFSET UNITYSDK_OFFSET(0xC3B57D0)

inline static constexpr unsigned int Class_2_5EB97EDC6B57E120_TypeDefinitionIndex = 77147;

class Class_2_5EB97EDC6B57E120 : public ::Class_1_43BD383C98B4C0C5_212
{
public:
	::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::Class_1_43BD383C98B4C0C5_213*>*>* PEDAMHCDJGF; // 0x10
	::System::Collections::Generic::List_1<::Class_1_43BD383C98B4C0C5_213*>* JKLAOBHMFHN; // 0x18
	::System::Nullable_1<::System::Int32> _RepeatCount_k__BackingField; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_5EB97EDC6B57E120__CTOR_OFFSET))(this);
	}

	::System::Nullable_1<::System::Int32> get_RepeatCount()
	{
		return ((::System::Nullable_1<::System::Int32>(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_5EB97EDC6B57E120_GET_REPEATCOUNT_OFFSET))(this);
	}

	::System::Void set_RepeatCount(::System::Nullable_1<::System::Int32> a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Nullable_1<::System::Int32>))((::PBYTE)hIl2Cpp + CLASS_2_5EB97EDC6B57E120_SET_REPEATCOUNT_OFFSET))(this, a1);
	}

	::System::Void Method_2_47A94975B0610A2C(::Class_1_43BD383C98B4C0C5_213* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_43BD383C98B4C0C5_213*))((::PBYTE)hIl2Cpp + CLASS_2_5EB97EDC6B57E120_METHOD_2_47A94975B0610A2C_OFFSET))(this, a1);
	}

	::System::Collections::Generic::IEnumerable_1<::System::Int32>* Method_2_431734A3FF995186(::System::Collections::Generic::IEnumerable_1<::RPG::GameCore::BaseChimeraDuelEntitiesSelectorConfig*>* a1)
	{
		return ((::System::Collections::Generic::IEnumerable_1<::System::Int32>*(*)(::PVOID, ::System::Collections::Generic::IEnumerable_1<::RPG::GameCore::BaseChimeraDuelEntitiesSelectorConfig*>*))((::PBYTE)hIl2Cpp + CLASS_2_5EB97EDC6B57E120_METHOD_2_431734A3FF995186_OFFSET))(this, a1);
	}
};
