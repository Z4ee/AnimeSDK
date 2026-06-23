#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class GameObjectPositionData; }
namespace System { class String; }

#define MOLEMOLE_CINEMANPCOFFSETSO_CLASS_1_1B304FF824E54B0D_METHOD_1_C3559276AC95E2C1_OFFSET UNITYSDK_OFFSET(0x1A054DA0)
#define MOLEMOLE_CINEMANPCOFFSETSO_CLASS_1_1B304FF824E54B0D__CTOR_OFFSET UNITYSDK_OFFSET(0x1A054D90)

namespace MoleMole
{
	inline static constexpr unsigned int CinemaNpcOffsetSo_Class_1_1B304FF824E54B0D_TypeDefinitionIndex = 60251;

	class CinemaNpcOffsetSo_Class_1_1B304FF824E54B0D : public ::System::Object
	{
	public:
		::System::String* Field_1_0; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CINEMANPCOFFSETSO_CLASS_1_1B304FF824E54B0D__CTOR_OFFSET))(this);
		}

		::System::Boolean Method_1_C3559276AC95E2C1(::MoleMole::GameObjectPositionData* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::GameObjectPositionData*))((::PBYTE)hIl2Cpp + MOLEMOLE_CINEMANPCOFFSETSO_CLASS_1_1B304FF824E54B0D_METHOD_1_C3559276AC95E2C1_OFFSET))(this, a1);
		}
	};
}
