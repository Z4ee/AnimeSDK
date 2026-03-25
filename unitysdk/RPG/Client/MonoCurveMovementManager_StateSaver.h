#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/MonoCurveMovementManager_StateInfo.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class MapDef; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_MONOCURVEMOVEMENTMANAGER_STATESAVER_METHOD_1_5242B274EDFF6B6A_OFFSET UNITYSDK_OFFSET(0x9C21E00)
#define RPG_CLIENT_MONOCURVEMOVEMENTMANAGER_STATESAVER_METHOD_1_7B12090AF6D76E60_OFFSET UNITYSDK_OFFSET(0x9C23D40)
#define RPG_CLIENT_MONOCURVEMOVEMENTMANAGER_STATESAVER__CCTOR_OFFSET UNITYSDK_OFFSET(0x9C23D30)
#define RPG_CLIENT_MONOCURVEMOVEMENTMANAGER_STATESAVER__CTOR_OFFSET UNITYSDK_OFFSET(0x9C23A00)

namespace RPG::Client
{
	inline static constexpr unsigned int MonoCurveMovementManager_StateSaver_TypeDefinitionIndex = 55968;

	class MonoCurveMovementManager_StateSaver : public ::System::Object
	{
	public:
		static ::RPG::Client::MapDef** StaticGet_cachedMapDef()
		{
			return (::RPG::Client::MapDef**)Il2CppClass::FromTypeDefinitionIndex(MonoCurveMovementManager_StateSaver_TypeDefinitionIndex)->GetStaticField(0x34C40);
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

		static ::System::Void Method_1_5242B274EDFF6B6A()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOCURVEMOVEMENTMANAGER_STATESAVER_METHOD_1_5242B274EDFF6B6A_OFFSET))();
		}

		static ::System::Void Method_1_7B12090AF6D76E60(::System::Object* a1)
		{
			return ((::System::Void(*)(::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOCURVEMOVEMENTMANAGER_STATESAVER_METHOD_1_7B12090AF6D76E60_OFFSET))(a1);
		}
	};
}
