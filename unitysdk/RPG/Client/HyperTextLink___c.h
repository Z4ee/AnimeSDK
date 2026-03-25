#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { template <typename T> class Predicate_1; }
namespace UnityEngine::UI { class Image; }

#define RPG_CLIENT_HYPERTEXTLINK___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x9931CA0)
#define RPG_CLIENT_HYPERTEXTLINK___C__CTOR_OFFSET UNITYSDK_OFFSET(0x9931CE0)
#define RPG_CLIENT_HYPERTEXTLINK___C__UPDATEQUADIMAGE_B__12_0_OFFSET UNITYSDK_OFFSET(0x9931CF0)

namespace RPG::Client
{
	inline static constexpr unsigned int HyperTextLink___c_TypeDefinitionIndex = 59448;

	class HyperTextLink___c : public ::System::Object
	{
	public:
		static ::System::Predicate_1<::UnityEngine::UI::Image*>** StaticGet___9__12_0()
		{
			return (::System::Predicate_1<::UnityEngine::UI::Image*>**)Il2CppClass::FromTypeDefinitionIndex(HyperTextLink___c_TypeDefinitionIndex)->GetStaticField(0x1F7A0);
		}
		static ::RPG::Client::HyperTextLink___c** StaticGet___9()
		{
			return (::RPG::Client::HyperTextLink___c**)Il2CppClass::FromTypeDefinitionIndex(HyperTextLink___c_TypeDefinitionIndex)->GetStaticField(0x1F7A8);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_HYPERTEXTLINK___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_HYPERTEXTLINK___C__CTOR_OFFSET))(this);
		}

		::System::Boolean _UpdateQuadImage_b__12_0(::UnityEngine::UI::Image* image)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::UI::Image*))((::PBYTE)hIl2Cpp + RPG_CLIENT_HYPERTEXTLINK___C__UPDATEQUADIMAGE_B__12_0_OFFSET))(this, image);
		}
	};
}
