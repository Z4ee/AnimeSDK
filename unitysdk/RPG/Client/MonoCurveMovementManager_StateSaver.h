#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/MonoCurveMovementManager_StateInfo.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class MapDef; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_MONOCURVEMOVEMENTMANAGER_STATESAVER_METHOD_1_0C10C7E7E3750739_OFFSET UNITYSDK_OFFSET(0x10CBD3A0)
#define RPG_CLIENT_MONOCURVEMOVEMENTMANAGER_STATESAVER_METHOD_1_7C3BCB023B0D3F9C_OFFSET UNITYSDK_OFFSET(0x10CBF370)
#define RPG_CLIENT_MONOCURVEMOVEMENTMANAGER_STATESAVER__CCTOR_OFFSET UNITYSDK_OFFSET(0x10CBF360)
#define RPG_CLIENT_MONOCURVEMOVEMENTMANAGER_STATESAVER__CTOR_OFFSET UNITYSDK_OFFSET(0x10CBF090)

namespace RPG::Client
{
	inline static constexpr unsigned int MonoCurveMovementManager_StateSaver_TypeDefinitionIndex = 65499;

	class MonoCurveMovementManager_StateSaver : public ::System::Object
	{
	public:
		static ::RPG::Client::MapDef** StaticGet_cachedMapDef()
		{
			return (::RPG::Client::MapDef**)Il2CppClass::FromTypeDefinitionIndex(MonoCurveMovementManager_StateSaver_TypeDefinitionIndex)->GetStaticField(0x4F8E0);
		}
		::System::Collections::Generic::List_1<::RPG::Client::MonoCurveMovementManager_StateInfo>* movementHandlers; // 0x10

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOCURVEMOVEMENTMANAGER_STATESAVER__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOCURVEMOVEMENTMANAGER_STATESAVER__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_1_0C10C7E7E3750739()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOCURVEMOVEMENTMANAGER_STATESAVER_METHOD_1_0C10C7E7E3750739_OFFSET))();
		}

		static ::System::Void Method_1_7C3BCB023B0D3F9C(::System::Object* a1)
		{
			return ((::System::Void(*)(::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOCURVEMOVEMENTMANAGER_STATESAVER_METHOD_1_7C3BCB023B0D3F9C_OFFSET))(a1);
		}
	};
}
