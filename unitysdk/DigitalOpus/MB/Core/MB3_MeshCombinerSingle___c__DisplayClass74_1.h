#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace DigitalOpus::MB::Core { class MB3_MeshCombinerSingle___c__DisplayClass74_0; }

#define DIGITALOPUS_MB_CORE_MB3_MESHCOMBINERSINGLE___C__DISPLAYCLASS74_1__CTOR_OFFSET UNITYSDK_OFFSET(0x1E368410)
#define DIGITALOPUS_MB_CORE_MB3_MESHCOMBINERSINGLE___C__DISPLAYCLASS74_1____ADDTOCOMBINED_B__0_OFFSET UNITYSDK_OFFSET(0x1E368420)

namespace DigitalOpus::MB::Core
{
	inline static constexpr unsigned int MB3_MeshCombinerSingle___c__DisplayClass74_1_TypeDefinitionIndex = 90648;

	class MB3_MeshCombinerSingle___c__DisplayClass74_1 : public ::System::Object
	{
	public:
		::DigitalOpus::MB::Core::MB3_MeshCombinerSingle___c__DisplayClass74_0* CS___8__locals1; // 0x10
		::System::Int32 i; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DIGITALOPUS_MB_CORE_MB3_MESHCOMBINERSINGLE___C__DISPLAYCLASS74_1__CTOR_OFFSET))(this);
		}

		::System::Boolean ___AddToCombined_b__0(::System::Int32 o)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + DIGITALOPUS_MB_CORE_MB3_MESHCOMBINERSINGLE___C__DISPLAYCLASS74_1____ADDTOCOMBINED_B__0_OFFSET))(this, o);
		}
	};
}
