#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RichTap::Common { class HapticDataModel; }
namespace System { template <typename T> class Comparison_1; }

#define RICHTAP_COMMON_HAPTICDATAMANAGER___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1BAB0680)
#define RICHTAP_COMMON_HAPTICDATAMANAGER___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1BAB06C0)
#define RICHTAP_COMMON_HAPTICDATAMANAGER___C__DECIDEREALPLAYBACK_B__5_0_OFFSET UNITYSDK_OFFSET(0x1BAB06D0)

namespace RichTap::Common
{
	inline static constexpr unsigned int HapticDataManager___c_TypeDefinitionIndex = 36494;

	class HapticDataManager___c : public ::System::Object
	{
	public:
		static ::System::Comparison_1<::RichTap::Common::HapticDataModel*>** StaticGet___9__5_0()
		{
			return (::System::Comparison_1<::RichTap::Common::HapticDataModel*>**)Il2CppClass::FromTypeDefinitionIndex(HapticDataManager___c_TypeDefinitionIndex)->GetStaticField(0x271A0);
		}
		static ::RichTap::Common::HapticDataManager___c** StaticGet___9()
		{
			return (::RichTap::Common::HapticDataManager___c**)Il2CppClass::FromTypeDefinitionIndex(HapticDataManager___c_TypeDefinitionIndex)->GetStaticField(0x271A8);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RICHTAP_COMMON_HAPTICDATAMANAGER___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RICHTAP_COMMON_HAPTICDATAMANAGER___C__CTOR_OFFSET))(this);
		}

		::System::Int32 _DecideRealPlayback_b__5_0(::RichTap::Common::HapticDataModel* A, ::RichTap::Common::HapticDataModel* B)
		{
			return ((::System::Int32(*)(::PVOID, ::RichTap::Common::HapticDataModel*, ::RichTap::Common::HapticDataModel*))((::PBYTE)hIl2Cpp + RICHTAP_COMMON_HAPTICDATAMANAGER___C__DECIDEREALPLAYBACK_B__5_0_OFFSET))(this, A, B);
		}
	};
}
