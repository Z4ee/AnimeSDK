#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ValueTuple_2.h"

namespace MoleMole::Photo { class BlendSpace1DSample; }
namespace System { template <typename T1, typename T2> class Func_2; }
namespace System { template <typename T> class Comparison_1; }

#define MOLEMOLE_PHOTO_PLAYABLEBLENDSPACE1DCONFIG___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x16CE1E40)
#define MOLEMOLE_PHOTO_PLAYABLEBLENDSPACE1DCONFIG___C__CTOR_OFFSET UNITYSDK_OFFSET(0x16CE1E80)
#define MOLEMOLE_PHOTO_PLAYABLEBLENDSPACE1DCONFIG___C__INITIALIZE_B__10_0_OFFSET UNITYSDK_OFFSET(0x16CE1E90)
#define MOLEMOLE_PHOTO_PLAYABLEBLENDSPACE1DCONFIG___C__REQUESTMEMORY_B__12_0_OFFSET UNITYSDK_OFFSET(0x16CE1EE0)

namespace MoleMole::Photo
{
	inline static constexpr unsigned int PlayableBlendSpace1DConfig___c_TypeDefinitionIndex = 77913;

	class PlayableBlendSpace1DConfig___c : public ::System::Object
	{
	public:
		static ::MoleMole::Photo::PlayableBlendSpace1DConfig___c** StaticGet___9()
		{
			return (::MoleMole::Photo::PlayableBlendSpace1DConfig___c**)Il2CppClass::FromTypeDefinitionIndex(PlayableBlendSpace1DConfig___c_TypeDefinitionIndex)->GetStaticField(0x42F90);
		}
		static ::System::Comparison_1<::System::ValueTuple_2<::System::Single, ::System::Int32>>** StaticGet___9__10_0()
		{
			return (::System::Comparison_1<::System::ValueTuple_2<::System::Single, ::System::Int32>>**)Il2CppClass::FromTypeDefinitionIndex(PlayableBlendSpace1DConfig___c_TypeDefinitionIndex)->GetStaticField(0x42F98);
		}
		static ::System::Func_2<::MoleMole::Photo::BlendSpace1DSample*, ::System::Boolean>** StaticGet___9__12_0()
		{
			return (::System::Func_2<::MoleMole::Photo::BlendSpace1DSample*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(PlayableBlendSpace1DConfig___c_TypeDefinitionIndex)->GetStaticField(0x42FA0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_PHOTO_PLAYABLEBLENDSPACE1DCONFIG___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_PHOTO_PLAYABLEBLENDSPACE1DCONFIG___C__CTOR_OFFSET))(this);
		}

		::System::Int32 _Initialize_b__10_0(::System::ValueTuple_2<::System::Single, ::System::Int32> a, ::System::ValueTuple_2<::System::Single, ::System::Int32> b)
		{
			return ((::System::Int32(*)(::PVOID, ::System::ValueTuple_2<::System::Single, ::System::Int32>, ::System::ValueTuple_2<::System::Single, ::System::Int32>))((::PBYTE)hIl2Cpp + MOLEMOLE_PHOTO_PLAYABLEBLENDSPACE1DCONFIG___C__INITIALIZE_B__10_0_OFFSET))(this, a, b);
		}

		::System::Boolean _RequestMemory_b__12_0(::MoleMole::Photo::BlendSpace1DSample* item)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::Photo::BlendSpace1DSample*))((::PBYTE)hIl2Cpp + MOLEMOLE_PHOTO_PLAYABLEBLENDSPACE1DCONFIG___C__REQUESTMEMORY_B__12_0_OFFSET))(this, item);
		}
	};
}
