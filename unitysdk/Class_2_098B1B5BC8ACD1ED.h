#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_222AFD56C06A15C1.h"

class Class_1_222B1F43FDE48C10;
class Class_2_14A4AB35DBFBD2FB;
namespace MoleMole { class SceneObjectStateWidget; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_2_098B1B5BC8ACD1ED_METHOD_2_ADF4AD3331B4D7AD_OFFSET UNITYSDK_OFFSET(0x17029190)
#define CLASS_2_098B1B5BC8ACD1ED__CTOR_OFFSET UNITYSDK_OFFSET(0x17029000)

inline static constexpr unsigned int Class_2_098B1B5BC8ACD1ED_TypeDefinitionIndex = 60650;

class Class_2_098B1B5BC8ACD1ED : public ::Class_1_222AFD56C06A15C1
{
public:
	::System::Collections::Generic::List_1<::MoleMole::SceneObjectStateWidget*>* Field_2_3; // 0x20
	::Class_2_14A4AB35DBFBD2FB* Field_2_2; // 0x28
	::System::Int32 Field_2_1; // 0x30
	::System::Int32 Field_2_0; // 0x34

	::System::Void _ctor(::System::Int32 a1, ::Class_1_222B1F43FDE48C10* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::Class_1_222B1F43FDE48C10*))((::PBYTE)hIl2Cpp + CLASS_2_098B1B5BC8ACD1ED__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_ADF4AD3331B4D7AD(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_098B1B5BC8ACD1ED_METHOD_2_ADF4AD3331B4D7AD_OFFSET))(this, a1);
	}
};
