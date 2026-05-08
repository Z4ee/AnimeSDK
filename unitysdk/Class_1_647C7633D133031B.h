#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Level/RatingType.h"
#include "unitysdk/System/Object.h"

namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_647C7633D133031B_METHOD_1_7A7F44411A8994A8_OFFSET UNITYSDK_OFFSET(0x1435DEF0)
#define CLASS_1_647C7633D133031B__CTOR_OFFSET UNITYSDK_OFFSET(0x1435DE50)

inline static constexpr unsigned int Class_1_647C7633D133031B_TypeDefinitionIndex = 72512;

class Class_1_647C7633D133031B : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::System::Int32>* Field_1_3; // 0x10
	::System::Single Field_1_0; // 0x18
	::System::Single Field_1_2; // 0x1C
	::MoleMole::Level::RatingType Field_1_1; // 0x20

	::System::Void _ctor(::System::Collections::Generic::List_1<::System::Int32>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::Int32>*))((::PBYTE)hIl2Cpp + CLASS_1_647C7633D133031B__CTOR_OFFSET))(this, a1);
	}

	::System::Void Method_1_7A7F44411A8994A8(::System::Single a1, ::MoleMole::Level::RatingType& a2, ::System::Single& a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single, ::MoleMole::Level::RatingType&, ::System::Single&))((::PBYTE)hIl2Cpp + CLASS_1_647C7633D133031B_METHOD_1_7A7F44411A8994A8_OFFSET))(this, a1, a2, a3);
	}
};
