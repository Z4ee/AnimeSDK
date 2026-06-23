#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class MonoTerrainZoneVoxel_Accessor; }
namespace System { class Action; }
namespace System::Collections { class IEnumerator; }

#define MOLEMOLE_MONOTERRAINZONEVOXEL_ACCESSOR_CLASS_1_4BF14F8EEB575C56_METHOD_1_5AFFA079DA8B20AA_OFFSET UNITYSDK_OFFSET(0x17E996C0)
#define MOLEMOLE_MONOTERRAINZONEVOXEL_ACCESSOR_CLASS_1_4BF14F8EEB575C56_METHOD_1_885DF4DA0F709E3E_OFFSET UNITYSDK_OFFSET(0x17E99710)
#define MOLEMOLE_MONOTERRAINZONEVOXEL_ACCESSOR_CLASS_1_4BF14F8EEB575C56__CTOR_OFFSET UNITYSDK_OFFSET(0x17E996B0)

namespace MoleMole
{
	inline static constexpr unsigned int MonoTerrainZoneVoxel_Accessor_Class_1_4BF14F8EEB575C56_TypeDefinitionIndex = 42875;

	class MonoTerrainZoneVoxel_Accessor_Class_1_4BF14F8EEB575C56 : public ::System::Object
	{
	public:
		::System::Action* Field_1_1; // 0x10
		::MoleMole::MonoTerrainZoneVoxel_Accessor* Field_1_0; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOTERRAINZONEVOXEL_ACCESSOR_CLASS_1_4BF14F8EEB575C56__CTOR_OFFSET))(this);
		}

		::System::Void Method_1_885DF4DA0F709E3E()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOTERRAINZONEVOXEL_ACCESSOR_CLASS_1_4BF14F8EEB575C56_METHOD_1_885DF4DA0F709E3E_OFFSET))(this);
		}

		::System::Collections::IEnumerator* Method_1_5AFFA079DA8B20AA()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOTERRAINZONEVOXEL_ACCESSOR_CLASS_1_4BF14F8EEB575C56_METHOD_1_5AFFA079DA8B20AA_OFFSET))(this);
		}
	};
}
