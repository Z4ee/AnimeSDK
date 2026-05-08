#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_2C4CCAADF2102B9F.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Bounds.h"

namespace MoleMole { class UrbanMapMeshHeightInfo; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_A93187421020321F__CTOR_OFFSET UNITYSDK_OFFSET(0x16652470)

inline static constexpr unsigned int Class_1_A93187421020321F_TypeDefinitionIndex = 49791;

class Class_1_A93187421020321F : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::System::Single>* Field_1_4; // 0x10
	::System::Collections::Generic::List_1<::Struct_2_2C4CCAADF2102B9F>* Field_1_1; // 0x18
	::System::Collections::Generic::List_1<::MoleMole::UrbanMapMeshHeightInfo*>* Field_1_5; // 0x20
	::UnityEngine::Bounds Field_1_0; // 0x28
	::System::Boolean Field_1_2; // 0x40
	::System::Boolean Field_1_3; // 0x41

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A93187421020321F__CTOR_OFFSET))(this);
	}
};
