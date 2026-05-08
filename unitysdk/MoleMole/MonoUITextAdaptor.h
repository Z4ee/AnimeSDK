#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/AdaptorShowType.h"
#include "unitysdk/MoleMole/MonoUILayoutAdaptorBase.h"

class Class_1_CF69D1566697178D;
namespace MoleMole { class TextAdaptor; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace UnityEngine::UI { class Text; }

#define MOLEMOLE_MONOUITEXTADAPTOR_DOINITLAYOUT_OFFSET UNITYSDK_OFFSET(0x15E51DD0)
#define MOLEMOLE_MONOUITEXTADAPTOR_INITTEXT_OFFSET UNITYSDK_OFFSET(0x15E52000)
#define MOLEMOLE_MONOUITEXTADAPTOR_ISCONTAINPLATFORMUIPARAMS_OFFSET UNITYSDK_OFFSET(0x15E51CF0)
#define MOLEMOLE_MONOUITEXTADAPTOR_ISPLATFORMUIPARAMSEMPTY_OFFSET UNITYSDK_OFFSET(0x15E51C50)
#define MOLEMOLE_MONOUITEXTADAPTOR_RELOADDATAFROMJSON_OFFSET UNITYSDK_OFFSET(0x15E521F0)
#define MOLEMOLE_MONOUITEXTADAPTOR__CTOR_OFFSET UNITYSDK_OFFSET(0x15E524F0)

namespace MoleMole
{
	inline static constexpr unsigned int MonoUITextAdaptor_TypeDefinitionIndex = 53883;

	class MonoUITextAdaptor : public ::MoleMole::MonoUILayoutAdaptorBase
	{
	public:
		::System::Collections::Generic::Dictionary_2<::MoleMole::AdaptorShowType, ::MoleMole::TextAdaptor*>* PlatformUIParams; // 0x88

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOUITEXTADAPTOR__CTOR_OFFSET))(this);
		}

		::System::Boolean IsPlatformUIParamsEmpty()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOUITEXTADAPTOR_ISPLATFORMUIPARAMSEMPTY_OFFSET))(this);
		}

		::System::Boolean IsContainPlatformUIParams(::MoleMole::AdaptorShowType adaptorShowType)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::AdaptorShowType))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOUITEXTADAPTOR_ISCONTAINPLATFORMUIPARAMS_OFFSET))(this, adaptorShowType);
		}

		::System::Boolean DoInitLayout(::MoleMole::AdaptorShowType adaptorShowType)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::AdaptorShowType))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOUITEXTADAPTOR_DOINITLAYOUT_OFFSET))(this, adaptorShowType);
		}

		::System::Void ReloadDataFromJson(::MoleMole::AdaptorShowType type, ::System::String*& adaptorInfo)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::AdaptorShowType, ::System::String*&))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOUITEXTADAPTOR_RELOADDATAFROMJSON_OFFSET))(this, type, adaptorInfo);
		}

		::System::Boolean InitText(::UnityEngine::UI::Text* text, ::Class_1_CF69D1566697178D* adaptorParams)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::UI::Text*, ::Class_1_CF69D1566697178D*))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOUITEXTADAPTOR_INITTEXT_OFFSET))(this, text, adaptorParams);
		}
	};
}
