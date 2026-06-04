#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ValueTuple_2.h"

namespace System { class String; }
namespace System { template <typename T1, typename T2> class Func_2; }
namespace System { template <typename T> class Comparison_1; }

#define RPGTOOLS_HOUDINITOUNITY_CURVEATTRIBUTE___C__CCTOR_OFFSET UNITYSDK_OFFSET(0xA2487C0)
#define RPGTOOLS_HOUDINITOUNITY_CURVEATTRIBUTE___C__CTOR_OFFSET UNITYSDK_OFFSET(0xA248800)
#define RPGTOOLS_HOUDINITOUNITY_CURVEATTRIBUTE___C__ONAFTERDESERIALIZE_B__28_0_OFFSET UNITYSDK_OFFSET(0xA248870)
#define RPGTOOLS_HOUDINITOUNITY_CURVEATTRIBUTE___C__SORTSPLITPOINTS_B__23_0_OFFSET UNITYSDK_OFFSET(0xA248810)

namespace RPGTools::HoudiniToUnity
{
	inline static constexpr unsigned int CurveAttribute___c_TypeDefinitionIndex = 44288;

	class CurveAttribute___c : public ::System::Object
	{
	public:
		static ::System::Func_2<::System::Single, ::System::String*>** StaticGet___9__28_0()
		{
			return (::System::Func_2<::System::Single, ::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(CurveAttribute___c_TypeDefinitionIndex)->GetStaticField(0x16610);
		}
		static ::System::Comparison_1<::System::ValueTuple_2<::System::Single, ::System::String*>>** StaticGet___9__23_0()
		{
			return (::System::Comparison_1<::System::ValueTuple_2<::System::Single, ::System::String*>>**)Il2CppClass::FromTypeDefinitionIndex(CurveAttribute___c_TypeDefinitionIndex)->GetStaticField(0x16618);
		}
		static ::RPGTools::HoudiniToUnity::CurveAttribute___c** StaticGet___9()
		{
			return (::RPGTools::HoudiniToUnity::CurveAttribute___c**)Il2CppClass::FromTypeDefinitionIndex(CurveAttribute___c_TypeDefinitionIndex)->GetStaticField(0x16620);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPGTOOLS_HOUDINITOUNITY_CURVEATTRIBUTE___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_HOUDINITOUNITY_CURVEATTRIBUTE___C__CTOR_OFFSET))(this);
		}

		::System::Int32 _SortSplitPoints_b__23_0(::System::ValueTuple_2<::System::Single, ::System::String*> a1, ::System::ValueTuple_2<::System::Single, ::System::String*> a2)
		{
			return ((::System::Int32(*)(::PVOID, ::System::ValueTuple_2<::System::Single, ::System::String*>, ::System::ValueTuple_2<::System::Single, ::System::String*>))((::PBYTE)hIl2Cpp + RPGTOOLS_HOUDINITOUNITY_CURVEATTRIBUTE___C__SORTSPLITPOINTS_B__23_0_OFFSET))(this, a1, a2);
		}

		::System::String* _OnAfterDeserialize_b__28_0(::System::Single a1)
		{
			return ((::System::String*(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPGTOOLS_HOUDINITOUNITY_CURVEATTRIBUTE___C__ONAFTERDESERIALIZE_B__28_0_OFFSET))(this, a1);
		}
	};
}
