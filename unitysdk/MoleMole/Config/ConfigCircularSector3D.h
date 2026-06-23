#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_1_236FD73ABC492E3F;

#define MOLEMOLE_CONFIG_CONFIGCIRCULARSECTOR3D_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x829630)
#define MOLEMOLE_CONFIG_CONFIGCIRCULARSECTOR3D_FROMFLX_OFFSET UNITYSDK_OFFSET(0x829570)
#define MOLEMOLE_CONFIG_CONFIGCIRCULARSECTOR3D_INTERNALFROMBINARY_OFFSET UNITYSDK_OFFSET(0x829690)
#define MOLEMOLE_CONFIG_CONFIGCIRCULARSECTOR3D_INTERNALFROMFLX_OFFSET UNITYSDK_OFFSET(0x829600)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigCircularSector3D_TypeDefinitionIndex = 71146;

	struct alignas(4) ConfigCircularSector3D
	{
		::UnityEngine::Vector3 Dir; // 0x10
		::UnityEngine::Vector3 Normal; // 0x1C
		::System::Single HalfAngleInDeg; // 0x28
		::System::Single Radius; // 0x2C

		/*
		::System::Boolean FromFlx(::FlexBuffers::FlxValue node)
		{
			return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGCIRCULARSECTOR3D_FROMFLX_OFFSET))(this, node);
		}
		*/

		/*
		::System::Boolean InternalFromFlx(::FlexBuffers::FlxMap node)
		{
			return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGCIRCULARSECTOR3D_INTERNALFROMFLX_OFFSET))(this, node);
		}
		*/

		::System::Boolean FromBinary(::Class_1_236FD73ABC492E3F* byteArray, ::System::Int32 threadFlag)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGCIRCULARSECTOR3D_FROMBINARY_OFFSET))(this, byteArray, threadFlag);
		}

		::System::Boolean InternalFromBinary(::Class_1_236FD73ABC492E3F* byteArray, ::System::Int32 threadFlag)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGCIRCULARSECTOR3D_INTERNALFROMBINARY_OFFSET))(this, byteArray, threadFlag);
		}
	};
}
