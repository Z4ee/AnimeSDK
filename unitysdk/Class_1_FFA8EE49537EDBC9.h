#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_FFA8EE49537EDBC9_Struct_2_496041E974F91CCD.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class RtLevelFloorInfo; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_FFA8EE49537EDBC9_METHOD_1_29E60F9B5388D7DD_OFFSET UNITYSDK_OFFSET(0x9041C20)
#define CLASS_1_FFA8EE49537EDBC9_METHOD_1_65DB43E5FB85A740_OFFSET UNITYSDK_OFFSET(0x9041CA0)
#define CLASS_1_FFA8EE49537EDBC9_METHOD_1_9B4C7E8CECEF48BA_OFFSET UNITYSDK_OFFSET(0x9041B70)
#define CLASS_1_FFA8EE49537EDBC9_METHOD_1_C7E9AEA4451B793F_OFFSET UNITYSDK_OFFSET(0x9041AC0)

inline static constexpr unsigned int Class_1_FFA8EE49537EDBC9_TypeDefinitionIndex = 57379;

class Class_1_FFA8EE49537EDBC9 : public ::System::Object
{
public:
	static ::System::String* Method_1_C7E9AEA4451B793F(::System::UInt32 a1, ::System::UInt32 a2)
	{
		return ((::System::String*(*)(::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_FFA8EE49537EDBC9_METHOD_1_C7E9AEA4451B793F_OFFSET))(a1, a2);
	}

	static ::System::String* Method_1_9B4C7E8CECEF48BA(::System::UInt32 a1, ::System::UInt32 a2)
	{
		return ((::System::String*(*)(::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_FFA8EE49537EDBC9_METHOD_1_9B4C7E8CECEF48BA_OFFSET))(a1, a2);
	}

	static ::System::String* Method_1_29E60F9B5388D7DD(::RPG::GameCore::RtLevelFloorInfo* a1)
	{
		return ((::System::String*(*)(::RPG::GameCore::RtLevelFloorInfo*))((::PBYTE)hIl2Cpp + CLASS_1_FFA8EE49537EDBC9_METHOD_1_29E60F9B5388D7DD_OFFSET))(a1);
	}

	static ::System::Collections::Generic::List_1<::Class_1_FFA8EE49537EDBC9_Struct_2_496041E974F91CCD>* Method_1_65DB43E5FB85A740(::RPG::GameCore::RtLevelFloorInfo* a1)
	{
		return ((::System::Collections::Generic::List_1<::Class_1_FFA8EE49537EDBC9_Struct_2_496041E974F91CCD>*(*)(::RPG::GameCore::RtLevelFloorInfo*))((::PBYTE)hIl2Cpp + CLASS_1_FFA8EE49537EDBC9_METHOD_1_65DB43E5FB85A740_OFFSET))(a1);
	}
};
