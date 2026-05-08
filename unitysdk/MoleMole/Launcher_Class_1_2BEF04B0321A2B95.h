#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class Launcher; }

#define MOLEMOLE_LAUNCHER_CLASS_1_2BEF04B0321A2B95_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x18220C90)
#define MOLEMOLE_LAUNCHER_CLASS_1_2BEF04B0321A2B95_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_SINGLE__GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x18220D90)
#define MOLEMOLE_LAUNCHER_CLASS_1_2BEF04B0321A2B95_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x18220DF0)
#define MOLEMOLE_LAUNCHER_CLASS_1_2BEF04B0321A2B95_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET UNITYSDK_OFFSET(0x18220DA0)
#define MOLEMOLE_LAUNCHER_CLASS_1_2BEF04B0321A2B95_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x18220C80)
#define MOLEMOLE_LAUNCHER_CLASS_1_2BEF04B0321A2B95__CTOR_OFFSET UNITYSDK_OFFSET(0x18220C70)

namespace MoleMole
{
	inline static constexpr unsigned int Launcher_Class_1_2BEF04B0321A2B95_TypeDefinitionIndex = 38342;

	class Launcher_Class_1_2BEF04B0321A2B95 : public ::System::Object
	{
	public:
		::MoleMole::Launcher* Field_1_2; // 0x10
		::System::Single Field_1_1; // 0x18
		::System::Int32 Field_1_0; // 0x1C

		::System::Void _ctor(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_LAUNCHER_CLASS_1_2BEF04B0321A2B95__CTOR_OFFSET))(this, a1);
		}

		::System::Void System_IDisposable_Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_LAUNCHER_CLASS_1_2BEF04B0321A2B95_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET))(this);
		}

		::System::Boolean MoveNext()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_LAUNCHER_CLASS_1_2BEF04B0321A2B95_MOVENEXT_OFFSET))(this);
		}

		::System::Single System_Collections_Generic_IEnumerator_System_Single__get_Current()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_LAUNCHER_CLASS_1_2BEF04B0321A2B95_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_SINGLE__GET_CURRENT_OFFSET))(this);
		}

		::System::Void System_Collections_IEnumerator_Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_LAUNCHER_CLASS_1_2BEF04B0321A2B95_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET))(this);
		}

		::System::Object* System_Collections_IEnumerator_get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_LAUNCHER_CLASS_1_2BEF04B0321A2B95_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET))(this);
		}
	};
}
