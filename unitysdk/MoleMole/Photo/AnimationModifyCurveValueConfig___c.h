#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/Unreal/FName.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Photo { class AnimationModifyCurveValueItem; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define MOLEMOLE_PHOTO_ANIMATIONMODIFYCURVEVALUECONFIG___C_METHOD_1_990263BC0BE1F726_OFFSET UNITYSDK_OFFSET(0x129D7C90)
#define MOLEMOLE_PHOTO_ANIMATIONMODIFYCURVEVALUECONFIG___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x129D7C40)
#define MOLEMOLE_PHOTO_ANIMATIONMODIFYCURVEVALUECONFIG___C__CTOR_OFFSET UNITYSDK_OFFSET(0x129D7C80)

namespace MoleMole::Photo
{
	inline static constexpr unsigned int AnimationModifyCurveValueConfig___c_TypeDefinitionIndex = 58536;

	class AnimationModifyCurveValueConfig___c : public ::System::Object
	{
	public:
		static ::System::Func_2<::MoleMole::Photo::AnimationModifyCurveValueItem*, ::Foundation::Unreal::FName>** StaticGet___9__6_0()
		{
			return (::System::Func_2<::MoleMole::Photo::AnimationModifyCurveValueItem*, ::Foundation::Unreal::FName>**)Il2CppClass::FromTypeDefinitionIndex(AnimationModifyCurveValueConfig___c_TypeDefinitionIndex)->GetStaticField(0x32830);
		}
		static ::MoleMole::Photo::AnimationModifyCurveValueConfig___c** StaticGet___9()
		{
			return (::MoleMole::Photo::AnimationModifyCurveValueConfig___c**)Il2CppClass::FromTypeDefinitionIndex(AnimationModifyCurveValueConfig___c_TypeDefinitionIndex)->GetStaticField(0x32838);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_PHOTO_ANIMATIONMODIFYCURVEVALUECONFIG___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_PHOTO_ANIMATIONMODIFYCURVEVALUECONFIG___C__CTOR_OFFSET))(this);
		}

		::Foundation::Unreal::FName Method_1_990263BC0BE1F726(::MoleMole::Photo::AnimationModifyCurveValueItem* a1)
		{
			return ((::Foundation::Unreal::FName(*)(::PVOID, ::MoleMole::Photo::AnimationModifyCurveValueItem*))((::PBYTE)hIl2Cpp + MOLEMOLE_PHOTO_ANIMATIONMODIFYCURVEVALUECONFIG___C_METHOD_1_990263BC0BE1F726_OFFSET))(this, a1);
		}
	};
}
