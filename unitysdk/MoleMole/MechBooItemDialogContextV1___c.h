#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_3_6EF456A21AE85EEC_206;
namespace System { template <typename T1, typename T2> class Converter_2; }

#define MOLEMOLE_MECHBOOITEMDIALOGCONTEXTV1___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x125D4390)
#define MOLEMOLE_MECHBOOITEMDIALOGCONTEXTV1___C__CTOR_OFFSET UNITYSDK_OFFSET(0x125D43D0)
#define MOLEMOLE_MECHBOOITEMDIALOGCONTEXTV1___C__GETPARTBUILDLIST_B__2_0_OFFSET UNITYSDK_OFFSET(0x125D43E0)

namespace MoleMole
{
	inline static constexpr unsigned int MechBooItemDialogContextV1___c_TypeDefinitionIndex = 52506;

	class MechBooItemDialogContextV1___c : public ::System::Object
	{
	public:
		static ::MoleMole::MechBooItemDialogContextV1___c** StaticGet___9()
		{
			return (::MoleMole::MechBooItemDialogContextV1___c**)Il2CppClass::FromTypeDefinitionIndex(MechBooItemDialogContextV1___c_TypeDefinitionIndex)->GetStaticField(0x46990);
		}
		static ::System::Converter_2<::Class_3_6EF456A21AE85EEC_206*, ::System::Int32>** StaticGet___9__2_0()
		{
			return (::System::Converter_2<::Class_3_6EF456A21AE85EEC_206*, ::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(MechBooItemDialogContextV1___c_TypeDefinitionIndex)->GetStaticField(0x46998);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_MECHBOOITEMDIALOGCONTEXTV1___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MECHBOOITEMDIALOGCONTEXTV1___C__CTOR_OFFSET))(this);
		}

		::System::Int32 _GetPartBuildList_b__2_0(::Class_3_6EF456A21AE85EEC_206* x)
		{
			return ((::System::Int32(*)(::PVOID, ::Class_3_6EF456A21AE85EEC_206*))((::PBYTE)hIl2Cpp + MOLEMOLE_MECHBOOITEMDIALOGCONTEXTV1___C__GETPARTBUILDLIST_B__2_0_OFFSET))(this, x);
		}
	};
}
