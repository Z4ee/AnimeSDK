#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPGTools/Timeline/Discussion/RelativeTransform.h"
#include "unitysdk/System/Object.h"

namespace RPGTools::Timeline::Discussion { class SwitchAnchorData; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define CLASS_1_9216AB1E8A7FC51A___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x9EDC070)
#define CLASS_1_9216AB1E8A7FC51A___C__CTOR_OFFSET UNITYSDK_OFFSET(0x9EDC0B0)
#define CLASS_1_9216AB1E8A7FC51A___C__GETCLIPANCHORINFO_B__12_0_OFFSET UNITYSDK_OFFSET(0x9EDC0C0)
#define CLASS_1_9216AB1E8A7FC51A___C__GETCLIPANCHORINFO_B__12_1_OFFSET UNITYSDK_OFFSET(0x9EDC0E0)

inline static constexpr unsigned int Class_1_9216AB1E8A7FC51A___c_TypeDefinitionIndex = 39282;

class Class_1_9216AB1E8A7FC51A___c : public ::System::Object
{
public:
	static ::System::Func_2<::RPGTools::Timeline::Discussion::SwitchAnchorData*, ::System::Boolean>** StaticGet___9__12_0()
	{
		return (::System::Func_2<::RPGTools::Timeline::Discussion::SwitchAnchorData*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_9216AB1E8A7FC51A___c_TypeDefinitionIndex)->GetStaticField(0x475C0);
	}
	static ::System::Func_2<::RPGTools::Timeline::Discussion::RelativeTransform, ::System::Boolean>** StaticGet___9__12_1()
	{
		return (::System::Func_2<::RPGTools::Timeline::Discussion::RelativeTransform, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_9216AB1E8A7FC51A___c_TypeDefinitionIndex)->GetStaticField(0x475C8);
	}
	static ::Class_1_9216AB1E8A7FC51A___c** StaticGet___9()
	{
		return (::Class_1_9216AB1E8A7FC51A___c**)Il2CppClass::FromTypeDefinitionIndex(Class_1_9216AB1E8A7FC51A___c_TypeDefinitionIndex)->GetStaticField(0x475D0);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_9216AB1E8A7FC51A___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9216AB1E8A7FC51A___C__CTOR_OFFSET))(this);
	}

	::System::Boolean _GetClipAnchorInfo_b__12_0(::RPGTools::Timeline::Discussion::SwitchAnchorData* s)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPGTools::Timeline::Discussion::SwitchAnchorData*))((::PBYTE)hIl2Cpp + CLASS_1_9216AB1E8A7FC51A___C__GETCLIPANCHORINFO_B__12_0_OFFSET))(this, s);
	}

	::System::Boolean _GetClipAnchorInfo_b__12_1(::RPGTools::Timeline::Discussion::RelativeTransform t)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPGTools::Timeline::Discussion::RelativeTransform))((::PBYTE)hIl2Cpp + CLASS_1_9216AB1E8A7FC51A___C__GETCLIPANCHORINFO_B__12_1_OFFSET))(this, t);
	}
};
