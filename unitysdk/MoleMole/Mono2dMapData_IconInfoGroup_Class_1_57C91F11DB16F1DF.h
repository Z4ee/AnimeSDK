#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_2_208CC9941471731A_105;
namespace MoleMole { class Mono2dMapData_IconInfo; }

#define MOLEMOLE_MONO2DMAPDATA_ICONINFOGROUP_CLASS_1_57C91F11DB16F1DF_METHOD_1_B37A116E85904A23_OFFSET UNITYSDK_OFFSET(0x16CC45C0)
#define MOLEMOLE_MONO2DMAPDATA_ICONINFOGROUP_CLASS_1_57C91F11DB16F1DF__CTOR_OFFSET UNITYSDK_OFFSET(0x16CC45B0)

namespace MoleMole
{
	inline static constexpr unsigned int Mono2dMapData_IconInfoGroup_Class_1_57C91F11DB16F1DF_TypeDefinitionIndex = 67193;

	class Mono2dMapData_IconInfoGroup_Class_1_57C91F11DB16F1DF : public ::System::Object
	{
	public:
		::Class_2_208CC9941471731A_105* Field_1_0; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONO2DMAPDATA_ICONINFOGROUP_CLASS_1_57C91F11DB16F1DF__CTOR_OFFSET))(this);
		}

		::System::Boolean Method_1_B37A116E85904A23(::MoleMole::Mono2dMapData_IconInfo* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::Mono2dMapData_IconInfo*))((::PBYTE)hIl2Cpp + MOLEMOLE_MONO2DMAPDATA_ICONINFOGROUP_CLASS_1_57C91F11DB16F1DF_METHOD_1_B37A116E85904A23_OFFSET))(this, a1);
		}
	};
}
