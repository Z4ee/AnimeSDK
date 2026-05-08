#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { template <typename T> class Action_1; }

#define FOUNDATION_VIEWOBJECT_VIEWOBJECTUTILS___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x132797A0)
#define FOUNDATION_VIEWOBJECT_VIEWOBJECTUTILS___C__CTOR_OFFSET UNITYSDK_OFFSET(0x132797E0)
#define FOUNDATION_VIEWOBJECT_VIEWOBJECTUTILS___C__HANDLEENTITYDISSOCIATEBYDITHERFADEOUT_B__22_0_OFFSET UNITYSDK_OFFSET(0x132797F0)

namespace Foundation::ViewObject
{
	inline static constexpr unsigned int ViewObjectUtils___c_TypeDefinitionIndex = 66919;

	class ViewObjectUtils___c : public ::System::Object
	{
	public:
		static ::Foundation::ViewObject::ViewObjectUtils___c** StaticGet___9()
		{
			return (::Foundation::ViewObject::ViewObjectUtils___c**)Il2CppClass::FromTypeDefinitionIndex(ViewObjectUtils___c_TypeDefinitionIndex)->GetStaticField(0x39810);
		}
		static ::System::Action_1<::System::UInt32>** StaticGet___9__22_0()
		{
			return (::System::Action_1<::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(ViewObjectUtils___c_TypeDefinitionIndex)->GetStaticField(0x39818);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FOUNDATION_VIEWOBJECT_VIEWOBJECTUTILS___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_VIEWOBJECT_VIEWOBJECTUTILS___C__CTOR_OFFSET))(this);
		}

		::System::Void _HandleEntityDissociateByDitherFadeOut_b__22_0(::System::UInt32 entityID)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + FOUNDATION_VIEWOBJECT_VIEWOBJECTUTILS___C__HANDLEENTITYDISSOCIATEBYDITHERFADEOUT_B__22_0_OFFSET))(this, entityID);
		}
	};
}
