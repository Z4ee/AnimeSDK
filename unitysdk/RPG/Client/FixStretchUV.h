#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/FixStrecthDimension.h"
#include "unitysdk/RPG/Client/StretchMode.h"
#include "unitysdk/RPG/Client/TAMonoPlugin_1.h"
#include "unitysdk/RPG/Client/TextureInfo.h"
#include "unitysdk/RPG/Client/UVMode.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace RPG::Client { class FixStretchUVBehavior; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class GameObject; }

#define RPG_CLIENT_FIXSTRETCHUV_GETTICKLODTEMPLATENAME_OFFSET UNITYSDK_OFFSET(0x190D9620)
#define RPG_CLIENT_FIXSTRETCHUV_METHOD_7_F0088C88851A7DFB_1_OFFSET UNITYSDK_OFFSET(0x190D9610)
#define RPG_CLIENT_FIXSTRETCHUV_METHOD_7_F0088C88851A7DFB_OFFSET UNITYSDK_OFFSET(0x190D9600)
#define RPG_CLIENT_FIXSTRETCHUV__CTOR_OFFSET UNITYSDK_OFFSET(0x190D9670)

namespace RPG::Client
{
	inline static constexpr unsigned int FixStretchUV_TypeDefinitionIndex = 70563;

	class FixStretchUV : public ::RPG::Client::TAMonoPlugin_1<::RPG::Client::FixStretchUVBehavior*>
	{
	public:
		::RPG::Client::FixStrecthDimension Dimension; // 0x30
		::RPG::Client::StretchMode CurrentStrecthMode; // 0x34
		::RPG::Client::UVMode CurrentUVMode; // 0x38
		::RPG::Client::StretchMode CurrentStrecthMode2; // 0x3C
		::RPG::Client::UVMode CurrentUVMode2; // 0x40
		::System::Boolean IsUseWorldScale; // 0x44
		::System::Collections::Generic::List_1<::RPG::Client::TextureInfo>* initialTiling; // 0x48
		::UnityEngine::Vector3 initialScale; // 0x50
		::System::Collections::Generic::List_1<::RPG::Client::TextureInfo>* textureTiling; // 0x60
		::System::Boolean isChangeable; // 0x68
		::System::Single HiddenThreshold; // 0x6C
		::System::Collections::Generic::List_1<::UnityEngine::GameObject*>* NeedHiddenGO; // 0x70

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIXSTRETCHUV__CTOR_OFFSET))(this);
		}

		::System::Boolean Method_7_F0088C88851A7DFB()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIXSTRETCHUV_METHOD_7_F0088C88851A7DFB_OFFSET))(this);
		}

		::System::Boolean Method_7_F0088C88851A7DFB_1()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIXSTRETCHUV_METHOD_7_F0088C88851A7DFB_1_OFFSET))(this);
		}

		::System::String* GetTickLodTemplateName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIXSTRETCHUV_GETTICKLODTEMPLATENAME_OFFSET))(this);
		}
	};
}
