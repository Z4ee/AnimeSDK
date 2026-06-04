#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/MonoEffectPluginCharaReplaceMatBase.h"
#include "unitysdk/UnityEngine/Color.h"
#include "unitysdk/UnityEngine/Vector2.h"

namespace RPG::Client { class CommonEffectMaterialBlockOne; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Transform; }

#define RPG_CLIENT_MONOEFFECTPLUGINDIRECTIONDISSOLVE_METHOD_8_0BDFAC56E6B704CB_OFFSET UNITYSDK_OFFSET(0xC0DBCD0)
#define RPG_CLIENT_MONOEFFECTPLUGINDIRECTIONDISSOLVE_METHOD_8_7033EFB970A18315_OFFSET UNITYSDK_OFFSET(0xC0DBE00)
#define RPG_CLIENT_MONOEFFECTPLUGINDIRECTIONDISSOLVE_METHOD_8_8BC85DADEC2C3862_OFFSET UNITYSDK_OFFSET(0xC0DB2F0)
#define RPG_CLIENT_MONOEFFECTPLUGINDIRECTIONDISSOLVE_METHOD_8_A91086AED8314DB5_OFFSET UNITYSDK_OFFSET(0xC0DA8A0)
#define RPG_CLIENT_MONOEFFECTPLUGINDIRECTIONDISSOLVE_METHOD_8_F0D9B6AAFF504D87_OFFSET UNITYSDK_OFFSET(0xC0DBDA0)
#define RPG_CLIENT_MONOEFFECTPLUGINDIRECTIONDISSOLVE_METHOD_8_F5447CD65612575D_OFFSET UNITYSDK_OFFSET(0xC0DBD90)
#define RPG_CLIENT_MONOEFFECTPLUGINDIRECTIONDISSOLVE__CTOR_OFFSET UNITYSDK_OFFSET(0xC0DBD60)

namespace RPG::Client
{
	inline static constexpr unsigned int MonoEffectPluginDirectionDissolve_TypeDefinitionIndex = 65451;

	class MonoEffectPluginDirectionDissolve : public ::RPG::Client::MonoEffectPluginCharaReplaceMatBase
	{
	public:
		::System::Boolean EnableDissolve; // 0x170
		::UnityEngine::Transform* DissolveTargetPlane; // 0x178
		::System::Single DissolveOutlineSize1; // 0x180
		::System::Single DissolveOutlineSize2; // 0x184
		::System::Single DissolveOutlineEmission; // 0x188
		::UnityEngine::Color DissolveOutlineColor1; // 0x18C
		::UnityEngine::Color DissolveOutlineColor2; // 0x19C
		::UnityEngine::Vector2 DissolveOutlineSmoothStep; // 0x1AC
		::System::Collections::Generic::List_1<::RPG::Client::CommonEffectMaterialBlockOne*>* Field_8_8; // 0x1B8

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINDIRECTIONDISSOLVE__CTOR_OFFSET))(this);
		}

		::System::Void Method_8_A91086AED8314DB5()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINDIRECTIONDISSOLVE_METHOD_8_A91086AED8314DB5_OFFSET))(this);
		}

		::System::Void Method_8_8BC85DADEC2C3862()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINDIRECTIONDISSOLVE_METHOD_8_8BC85DADEC2C3862_OFFSET))(this);
		}

		::System::Void Method_8_0BDFAC56E6B704CB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINDIRECTIONDISSOLVE_METHOD_8_0BDFAC56E6B704CB_OFFSET))(this);
		}

		::System::Void Method_8_F5447CD65612575D()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINDIRECTIONDISSOLVE_METHOD_8_F5447CD65612575D_OFFSET))(this);
		}

		::System::Void Method_8_F0D9B6AAFF504D87()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINDIRECTIONDISSOLVE_METHOD_8_F0D9B6AAFF504D87_OFFSET))(this);
		}

		::System::Void Method_8_7033EFB970A18315()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINDIRECTIONDISSOLVE_METHOD_8_7033EFB970A18315_OFFSET))(this);
		}
	};
}
