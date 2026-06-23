#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Battle { class Entity; }
namespace System { template <typename T> class Action_1; }

#define CLASS_3_90205B4603E8E5A9_CLASS_1_99E41AC6CD69E002__CTOR_OFFSET UNITYSDK_OFFSET(0x14E8F610)

inline static constexpr unsigned int Class_3_90205B4603E8E5A9_Class_1_99E41AC6CD69E002_TypeDefinitionIndex = 45194;

class Class_3_90205B4603E8E5A9_Class_1_99E41AC6CD69E002 : public ::System::Object
{
public:
	::System::Action_1<::MoleMole::Battle::Entity*>* Field_1_0; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_90205B4603E8E5A9_CLASS_1_99E41AC6CD69E002__CTOR_OFFSET))(this);
	}
};
