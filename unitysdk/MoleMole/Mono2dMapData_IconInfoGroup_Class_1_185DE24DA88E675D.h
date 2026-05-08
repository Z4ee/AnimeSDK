#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_2_208CC9941471731A_121;
namespace MoleMole { class Mono2dMapData_IconInfo; }

#define MOLEMOLE_MONO2DMAPDATA_ICONINFOGROUP_CLASS_1_185DE24DA88E675D_METHOD_1_6606825E2317DFEA_OFFSET UNITYSDK_OFFSET(0x178205B0)
#define MOLEMOLE_MONO2DMAPDATA_ICONINFOGROUP_CLASS_1_185DE24DA88E675D__CTOR_OFFSET UNITYSDK_OFFSET(0x178205A0)

namespace MoleMole
{
	inline static constexpr unsigned int Mono2dMapData_IconInfoGroup_Class_1_185DE24DA88E675D_TypeDefinitionIndex = 55547;

	class Mono2dMapData_IconInfoGroup_Class_1_185DE24DA88E675D : public ::System::Object
	{
	public:
		::MoleMole::Mono2dMapData_IconInfo* Field_1_0; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONO2DMAPDATA_ICONINFOGROUP_CLASS_1_185DE24DA88E675D__CTOR_OFFSET))(this);
		}

		::System::Boolean Method_1_6606825E2317DFEA(::Class_2_208CC9941471731A_121* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_2_208CC9941471731A_121*))((::PBYTE)hIl2Cpp + MOLEMOLE_MONO2DMAPDATA_ICONINFOGROUP_CLASS_1_185DE24DA88E675D_METHOD_1_6606825E2317DFEA_OFFSET))(this, a1);
		}
	};
}
