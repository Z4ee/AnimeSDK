#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Battle/EntityBodySize.h"
#include "unitysdk/System/Object.h"

class Class_3_3A3A95CA33F5CFBC;
namespace System { template <typename T1, typename T2> class Func_2; }

#define MOLEMOLE_CONFIG_CAMERASTORYDATAACTIVECONDITION___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x12415710)
#define MOLEMOLE_CONFIG_CAMERASTORYDATAACTIVECONDITION___C__CTOR_OFFSET UNITYSDK_OFFSET(0x12415750)
#define MOLEMOLE_CONFIG_CAMERASTORYDATAACTIVECONDITION___C__GETENTITYBODYSIZE_B__3_0_OFFSET UNITYSDK_OFFSET(0x12415760)

namespace MoleMole::Config
{
	inline static constexpr unsigned int CameraStoryDataActiveCondition___c_TypeDefinitionIndex = 65452;

	class CameraStoryDataActiveCondition___c : public ::System::Object
	{
	public:
		static ::System::Func_2<::Class_3_3A3A95CA33F5CFBC*, ::MoleMole::Battle::EntityBodySize>** StaticGet___9__3_0()
		{
			return (::System::Func_2<::Class_3_3A3A95CA33F5CFBC*, ::MoleMole::Battle::EntityBodySize>**)Il2CppClass::FromTypeDefinitionIndex(CameraStoryDataActiveCondition___c_TypeDefinitionIndex)->GetStaticField(0x401D0);
		}
		static ::MoleMole::Config::CameraStoryDataActiveCondition___c** StaticGet___9()
		{
			return (::MoleMole::Config::CameraStoryDataActiveCondition___c**)Il2CppClass::FromTypeDefinitionIndex(CameraStoryDataActiveCondition___c_TypeDefinitionIndex)->GetStaticField(0x401D8);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CAMERASTORYDATAACTIVECONDITION___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CAMERASTORYDATAACTIVECONDITION___C__CTOR_OFFSET))(this);
		}

		::MoleMole::Battle::EntityBodySize _GetEntityBodySize_b__3_0(::Class_3_3A3A95CA33F5CFBC* comp)
		{
			return ((::MoleMole::Battle::EntityBodySize(*)(::PVOID, ::Class_3_3A3A95CA33F5CFBC*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CAMERASTORYDATAACTIVECONDITION___C__GETENTITYBODYSIZE_B__3_0_OFFSET))(this, comp);
		}
	};
}
