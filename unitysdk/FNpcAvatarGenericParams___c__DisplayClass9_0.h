#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ENPCAvatarBodyPart.h"
#include "unitysdk/System/Object.h"

class PartMaterials;

#define FNPCAVATARGENERICPARAMS___C__DISPLAYCLASS9_0__CONVERTCONFIGPARTLISTTORUNTIMEPARTLIST_B__0_OFFSET UNITYSDK_OFFSET(0x111A5B00)
#define FNPCAVATARGENERICPARAMS___C__DISPLAYCLASS9_0__CTOR_OFFSET UNITYSDK_OFFSET(0x111A5AF0)

inline static constexpr unsigned int FNpcAvatarGenericParams___c__DisplayClass9_0_TypeDefinitionIndex = 77100;

class FNpcAvatarGenericParams___c__DisplayClass9_0 : public ::System::Object
{
public:
	::ENPCAvatarBodyPart part; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FNPCAVATARGENERICPARAMS___C__DISPLAYCLASS9_0__CTOR_OFFSET))(this);
	}

	::System::Boolean _ConvertConfigPartListToRuntimePartList_b__0(::PartMaterials* x)
	{
		return ((::System::Boolean(*)(::PVOID, ::PartMaterials*))((::PBYTE)hIl2Cpp + FNPCAVATARGENERICPARAMS___C__DISPLAYCLASS9_0__CONVERTCONFIGPARTLISTTORUNTIMEPARTLIST_B__0_OFFSET))(this, x);
	}
};
