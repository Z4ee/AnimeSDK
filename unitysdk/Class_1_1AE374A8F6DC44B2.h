#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_1AE374A8F6DC44B2_Struct_2_496041E974F91CCD.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class RtLevelFloorInfo; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_1AE374A8F6DC44B2_METHOD_1_29E60F9B5388D7DD_OFFSET UNITYSDK_OFFSET(0x139B9EA0)
#define CLASS_1_1AE374A8F6DC44B2_METHOD_1_5D70ECC55F59492F_OFFSET UNITYSDK_OFFSET(0x139B9D80)
#define CLASS_1_1AE374A8F6DC44B2_METHOD_1_70A638FCFC76F2EE_OFFSET UNITYSDK_OFFSET(0x139B9F20)
#define CLASS_1_1AE374A8F6DC44B2_METHOD_1_C7E9AEA4451B793F_OFFSET UNITYSDK_OFFSET(0x139B9CD0)

inline static constexpr unsigned int Class_1_1AE374A8F6DC44B2_TypeDefinitionIndex = 58191;

class Class_1_1AE374A8F6DC44B2 : public ::System::Object
{
public:
	static ::System::String* Method_1_C7E9AEA4451B793F(::System::UInt32 a1, ::System::UInt32 a2)
	{
		return ((::System::String*(*)(::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_1AE374A8F6DC44B2_METHOD_1_C7E9AEA4451B793F_OFFSET))(a1, a2);
	}

	static ::System::String* Method_1_5D70ECC55F59492F(::System::UInt32 a1, ::System::UInt32 a2)
	{
		return ((::System::String*(*)(::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_1AE374A8F6DC44B2_METHOD_1_5D70ECC55F59492F_OFFSET))(a1, a2);
	}

	static ::System::String* Method_1_29E60F9B5388D7DD(::RPG::GameCore::RtLevelFloorInfo* a1)
	{
		return ((::System::String*(*)(::RPG::GameCore::RtLevelFloorInfo*))((::PBYTE)hIl2Cpp + CLASS_1_1AE374A8F6DC44B2_METHOD_1_29E60F9B5388D7DD_OFFSET))(a1);
	}

	static ::System::Collections::Generic::List_1<::Class_1_1AE374A8F6DC44B2_Struct_2_496041E974F91CCD>* Method_1_70A638FCFC76F2EE(::RPG::GameCore::RtLevelFloorInfo* a1)
	{
		return ((::System::Collections::Generic::List_1<::Class_1_1AE374A8F6DC44B2_Struct_2_496041E974F91CCD>*(*)(::RPG::GameCore::RtLevelFloorInfo*))((::PBYTE)hIl2Cpp + CLASS_1_1AE374A8F6DC44B2_METHOD_1_70A638FCFC76F2EE_OFFSET))(a1);
	}
};
