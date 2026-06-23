#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FluffyUnderware/Curvy/Generator/CGModule.h"
#include "unitysdk/FluffyUnderware/DevTools/FloatRegion.h"
#include "unitysdk/FluffyUnderware/DevTools/RegionOptions_1.h"

namespace FluffyUnderware::Curvy::Generator { class CGModuleInputSlot; }
namespace FluffyUnderware::Curvy::Generator { class CGModuleOutputSlot; }
namespace FluffyUnderware::Curvy::Generator { class CGPath; }

#define FLUFFYUNDERWARE_CURVY_GENERATOR_MODULES_BUILDRASTERIZEDPATH_GET_ANGLETHRESHOLD_OFFSET UNITYSDK_OFFSET(0x1DC8E5C0)
#define FLUFFYUNDERWARE_CURVY_GENERATOR_MODULES_BUILDRASTERIZEDPATH_GET_CLAMPPATH_OFFSET UNITYSDK_OFFSET(0x1DC8E430)
#define FLUFFYUNDERWARE_CURVY_GENERATOR_MODULES_BUILDRASTERIZEDPATH_GET_FROM_OFFSET UNITYSDK_OFFSET(0x1DC8E2E0)
#define FLUFFYUNDERWARE_CURVY_GENERATOR_MODULES_BUILDRASTERIZEDPATH_GET_LENGTH_OFFSET UNITYSDK_OFFSET(0x1DC8E450)
#define FLUFFYUNDERWARE_CURVY_GENERATOR_MODULES_BUILDRASTERIZEDPATH_GET_OPTIMIZE_OFFSET UNITYSDK_OFFSET(0x1DC8E570)
#define FLUFFYUNDERWARE_CURVY_GENERATOR_MODULES_BUILDRASTERIZEDPATH_GET_PATHISCLOSED_OFFSET UNITYSDK_OFFSET(0x1DC8E6E0)
#define FLUFFYUNDERWARE_CURVY_GENERATOR_MODULES_BUILDRASTERIZEDPATH_GET_PATH_OFFSET UNITYSDK_OFFSET(0x1DC8E630)
#define FLUFFYUNDERWARE_CURVY_GENERATOR_MODULES_BUILDRASTERIZEDPATH_GET_RANGEOPTIONS_OFFSET UNITYSDK_OFFSET(0x1DC8E910)
#define FLUFFYUNDERWARE_CURVY_GENERATOR_MODULES_BUILDRASTERIZEDPATH_GET_RESOLUTION_OFFSET UNITYSDK_OFFSET(0x1DC8E510)
#define FLUFFYUNDERWARE_CURVY_GENERATOR_MODULES_BUILDRASTERIZEDPATH_GET_TO_OFFSET UNITYSDK_OFFSET(0x1DC8E370)
#define FLUFFYUNDERWARE_CURVY_GENERATOR_MODULES_BUILDRASTERIZEDPATH_GET_USEBUGGEDRANGE_OFFSET UNITYSDK_OFFSET(0x1DC8E8C0)
#define FLUFFYUNDERWARE_CURVY_GENERATOR_MODULES_BUILDRASTERIZEDPATH_ONENABLE_OFFSET UNITYSDK_OFFSET(0x1DC8E9F0)
#define FLUFFYUNDERWARE_CURVY_GENERATOR_MODULES_BUILDRASTERIZEDPATH_REFRESH_OFFSET UNITYSDK_OFFSET(0x1DC8EC40)
#define FLUFFYUNDERWARE_CURVY_GENERATOR_MODULES_BUILDRASTERIZEDPATH_RESET_OFFSET UNITYSDK_OFFSET(0x1DC8EB60)
#define FLUFFYUNDERWARE_CURVY_GENERATOR_MODULES_BUILDRASTERIZEDPATH_SET_ANGLETHRESHOLD_OFFSET UNITYSDK_OFFSET(0x1DC8E5D0)
#define FLUFFYUNDERWARE_CURVY_GENERATOR_MODULES_BUILDRASTERIZEDPATH_SET_FROM_OFFSET UNITYSDK_OFFSET(0x1DC8E2F0)
#define FLUFFYUNDERWARE_CURVY_GENERATOR_MODULES_BUILDRASTERIZEDPATH_SET_LENGTH_OFFSET UNITYSDK_OFFSET(0x1DC8E490)
#define FLUFFYUNDERWARE_CURVY_GENERATOR_MODULES_BUILDRASTERIZEDPATH_SET_OPTIMIZE_OFFSET UNITYSDK_OFFSET(0x1DC8E580)
#define FLUFFYUNDERWARE_CURVY_GENERATOR_MODULES_BUILDRASTERIZEDPATH_SET_RESOLUTION_OFFSET UNITYSDK_OFFSET(0x1DC8E520)
#define FLUFFYUNDERWARE_CURVY_GENERATOR_MODULES_BUILDRASTERIZEDPATH_SET_TO_OFFSET UNITYSDK_OFFSET(0x1DC8E380)
#define FLUFFYUNDERWARE_CURVY_GENERATOR_MODULES_BUILDRASTERIZEDPATH_SET_USEBUGGEDRANGE_OFFSET UNITYSDK_OFFSET(0x1DC8E8D0)
#define FLUFFYUNDERWARE_CURVY_GENERATOR_MODULES_BUILDRASTERIZEDPATH__CTOR_OFFSET UNITYSDK_OFFSET(0x1DC8EF80)

namespace FluffyUnderware::Curvy::Generator::Modules
{
	inline static constexpr unsigned int BuildRasterizedPath_TypeDefinitionIndex = 38976;

	class BuildRasterizedPath : public ::FluffyUnderware::Curvy::Generator::CGModule
	{
	public:
		// static const ::System::Int32 MinResolution = 0x1; // 0x0
		// static const ::System::Int32 MaxResolution = 0x64; // 0x0
		// static const ::System::Single MinAngleThreshold; // 0x0
		// static const ::System::Single MaxAngleThreshold; // 0x0
		// static const ::System::Int32 DefaultResolution = 0x32; // 0x0
		// static const ::System::Int32 DefaultAngleThreshold = 0xA; // 0x0
		::FluffyUnderware::Curvy::Generator::CGModuleInputSlot* InPath; // 0xB8
		::FluffyUnderware::Curvy::Generator::CGModuleOutputSlot* OutPath; // 0xC0
		::FluffyUnderware::DevTools::FloatRegion m_Range; // 0xC8
		::System::Int32 m_Resolution; // 0xD4
		::System::Boolean m_Optimize; // 0xD8
		::System::Single m_AngleTreshold; // 0xDC
		::System::Boolean useBuggedRange; // 0xE0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_GENERATOR_MODULES_BUILDRASTERIZEDPATH__CTOR_OFFSET))(this);
		}

		::System::Single get_From()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_GENERATOR_MODULES_BUILDRASTERIZEDPATH_GET_FROM_OFFSET))(this);
		}

		::System::Void set_From(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_GENERATOR_MODULES_BUILDRASTERIZEDPATH_SET_FROM_OFFSET))(this, value);
		}

		::System::Single get_To()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_GENERATOR_MODULES_BUILDRASTERIZEDPATH_GET_TO_OFFSET))(this);
		}

		::System::Void set_To(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_GENERATOR_MODULES_BUILDRASTERIZEDPATH_SET_TO_OFFSET))(this, value);
		}

		::System::Single get_Length()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_GENERATOR_MODULES_BUILDRASTERIZEDPATH_GET_LENGTH_OFFSET))(this);
		}

		::System::Void set_Length(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_GENERATOR_MODULES_BUILDRASTERIZEDPATH_SET_LENGTH_OFFSET))(this, value);
		}

		::System::Int32 get_Resolution()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_GENERATOR_MODULES_BUILDRASTERIZEDPATH_GET_RESOLUTION_OFFSET))(this);
		}

		::System::Void set_Resolution(::System::Int32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_GENERATOR_MODULES_BUILDRASTERIZEDPATH_SET_RESOLUTION_OFFSET))(this, value);
		}

		::System::Boolean get_Optimize()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_GENERATOR_MODULES_BUILDRASTERIZEDPATH_GET_OPTIMIZE_OFFSET))(this);
		}

		::System::Void set_Optimize(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_GENERATOR_MODULES_BUILDRASTERIZEDPATH_SET_OPTIMIZE_OFFSET))(this, value);
		}

		::System::Single get_AngleThreshold()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_GENERATOR_MODULES_BUILDRASTERIZEDPATH_GET_ANGLETHRESHOLD_OFFSET))(this);
		}

		::System::Void set_AngleThreshold(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_GENERATOR_MODULES_BUILDRASTERIZEDPATH_SET_ANGLETHRESHOLD_OFFSET))(this, value);
		}

		::FluffyUnderware::Curvy::Generator::CGPath* get_Path()
		{
			return ((::FluffyUnderware::Curvy::Generator::CGPath*(*)(::PVOID))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_GENERATOR_MODULES_BUILDRASTERIZEDPATH_GET_PATH_OFFSET))(this);
		}

		::System::Boolean get_PathIsClosed()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_GENERATOR_MODULES_BUILDRASTERIZEDPATH_GET_PATHISCLOSED_OFFSET))(this);
		}

		::System::Boolean get_UseBuggedRange()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_GENERATOR_MODULES_BUILDRASTERIZEDPATH_GET_USEBUGGEDRANGE_OFFSET))(this);
		}

		::System::Void set_UseBuggedRange(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_GENERATOR_MODULES_BUILDRASTERIZEDPATH_SET_USEBUGGEDRANGE_OFFSET))(this, value);
		}

		::System::Boolean get_ClampPath()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_GENERATOR_MODULES_BUILDRASTERIZEDPATH_GET_CLAMPPATH_OFFSET))(this);
		}

		::FluffyUnderware::DevTools::RegionOptions_1<::System::Single> get_RangeOptions()
		{
			return ((::FluffyUnderware::DevTools::RegionOptions_1<::System::Single>(*)(::PVOID))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_GENERATOR_MODULES_BUILDRASTERIZEDPATH_GET_RANGEOPTIONS_OFFSET))(this);
		}

		::System::Void OnEnable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_GENERATOR_MODULES_BUILDRASTERIZEDPATH_ONENABLE_OFFSET))(this);
		}

		::System::Void Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_GENERATOR_MODULES_BUILDRASTERIZEDPATH_RESET_OFFSET))(this);
		}

		::System::Void Refresh()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_GENERATOR_MODULES_BUILDRASTERIZEDPATH_REFRESH_OFFSET))(this);
		}
	};
}
