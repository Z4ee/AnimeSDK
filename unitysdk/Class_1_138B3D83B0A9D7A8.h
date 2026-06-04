#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_2_B9E8C2EEAA5C96EC;
class Class_2_F47F7A3F5E97970D;
class Class_3_1E4F9B0ED3BF21DE;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_138B3D83B0A9D7A8_DELTATIMEWITHIGNOREINDEX_OFFSET UNITYSDK_OFFSET(0xA482AF0)
#define CLASS_1_138B3D83B0A9D7A8_DELTATIME_OFFSET UNITYSDK_OFFSET(0xA482A40)
#define CLASS_1_138B3D83B0A9D7A8_DISPOSE_OFFSET UNITYSDK_OFFSET(0xA482F50)
#define CLASS_1_138B3D83B0A9D7A8_FIXEDDELTATIME_OFFSET UNITYSDK_OFFSET(0xA482930)
#define CLASS_1_138B3D83B0A9D7A8_METHOD_1_230FE7F4B4EA88A5_OFFSET UNITYSDK_OFFSET(0xA482B70)
#define CLASS_1_138B3D83B0A9D7A8_TIMESCALE_OFFSET UNITYSDK_OFFSET(0xA4829E0)
#define CLASS_1_138B3D83B0A9D7A8__CTOR_OFFSET UNITYSDK_OFFSET(0xA482920)

inline static constexpr unsigned int Class_1_138B3D83B0A9D7A8_TypeDefinitionIndex = 71405;

class Class_1_138B3D83B0A9D7A8 : public ::System::Object
{
public:
	::Class_3_1E4F9B0ED3BF21DE* Field_1_0; // 0x10
	::Class_2_F47F7A3F5E97970D* Field_1_1; // 0x18

	::System::Void _ctor(::Class_2_F47F7A3F5E97970D* a1, ::Class_3_1E4F9B0ED3BF21DE* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_F47F7A3F5E97970D*, ::Class_3_1E4F9B0ED3BF21DE*))((::PBYTE)hIl2Cpp + CLASS_1_138B3D83B0A9D7A8__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Single FixedDeltaTime(::Class_2_B9E8C2EEAA5C96EC* a1)
	{
		return ((::System::Single(*)(::PVOID, ::Class_2_B9E8C2EEAA5C96EC*))((::PBYTE)hIl2Cpp + CLASS_1_138B3D83B0A9D7A8_FIXEDDELTATIME_OFFSET))(this, a1);
	}

	::System::Single DeltaTime(::Class_2_B9E8C2EEAA5C96EC* a1)
	{
		return ((::System::Single(*)(::PVOID, ::Class_2_B9E8C2EEAA5C96EC*))((::PBYTE)hIl2Cpp + CLASS_1_138B3D83B0A9D7A8_DELTATIME_OFFSET))(this, a1);
	}

	::System::Single DeltaTimeWithIgnoreIndex(::Class_2_B9E8C2EEAA5C96EC* a1, ::System::Collections::Generic::List_1<::System::Int32>* a2, ::System::Collections::Generic::List_1<::System::Int32>* a3)
	{
		return ((::System::Single(*)(::PVOID, ::Class_2_B9E8C2EEAA5C96EC*, ::System::Collections::Generic::List_1<::System::Int32>*, ::System::Collections::Generic::List_1<::System::Int32>*))((::PBYTE)hIl2Cpp + CLASS_1_138B3D83B0A9D7A8_DELTATIMEWITHIGNOREINDEX_OFFSET))(this, a1, a2, a3);
	}

	::System::Single TimeScale(::Class_2_B9E8C2EEAA5C96EC* a1)
	{
		return ((::System::Single(*)(::PVOID, ::Class_2_B9E8C2EEAA5C96EC*))((::PBYTE)hIl2Cpp + CLASS_1_138B3D83B0A9D7A8_TIMESCALE_OFFSET))(this, a1);
	}

	::System::Single Method_1_230FE7F4B4EA88A5(::Class_2_B9E8C2EEAA5C96EC* a1, ::System::Collections::Generic::List_1<::System::Int32>* a2, ::System::Collections::Generic::List_1<::System::Int32>* a3)
	{
		return ((::System::Single(*)(::PVOID, ::Class_2_B9E8C2EEAA5C96EC*, ::System::Collections::Generic::List_1<::System::Int32>*, ::System::Collections::Generic::List_1<::System::Int32>*))((::PBYTE)hIl2Cpp + CLASS_1_138B3D83B0A9D7A8_METHOD_1_230FE7F4B4EA88A5_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_138B3D83B0A9D7A8_DISPOSE_OFFSET))(this);
	}
};
