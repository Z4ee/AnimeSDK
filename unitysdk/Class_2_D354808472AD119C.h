#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_953952658186A166.h"
#include "unitysdk/Class_2_D354808472AD119C_Enum_3_1A003745C1074348.h"
#include "unitysdk/Struct_2_6E1B724B14572104_2.h"
#include "unitysdk/Struct_2_C006DA4A56FC21E6.h"
#include "unitysdk/Struct_2_D9E98FAEB7FF7336.h"
#include "unitysdk/Struct_2_F213AC3D3FBF57B9.h"
#include "unitysdk/UnityEngine/Rect.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_1_5A44BA76A33709FD;
class Class_5_DCFF91E03A93C03C;
namespace MoleMole { class UIHollowChessboard3DModelController; }

#define CLASS_2_D354808472AD119C_METHOD_2_2635C840A82E1816_OFFSET UNITYSDK_OFFSET(0x10F480B0)
#define CLASS_2_D354808472AD119C_METHOD_2_A9E3ECA7BB667BD5_OFFSET UNITYSDK_OFFSET(0x10F496D0)
#define CLASS_2_D354808472AD119C_METHOD_2_D61A6EAE766F4E89_OFFSET UNITYSDK_OFFSET(0x10F493D0)
#define CLASS_2_D354808472AD119C_METHOD_2_E886FC6E092B74BC_OFFSET UNITYSDK_OFFSET(0x10F49900)
#define CLASS_2_D354808472AD119C__CTOR_OFFSET UNITYSDK_OFFSET(0x10F49600)

inline static constexpr unsigned int Class_2_D354808472AD119C_TypeDefinitionIndex = 54774;

class Class_2_D354808472AD119C : public ::Class_1_953952658186A166
{
public:
	// static const ::System::Single Field_2_10; // 0x0
	::MoleMole::UIHollowChessboard3DModelController* Field_2_1; // 0x10
	::Class_5_DCFF91E03A93C03C* Field_2_2; // 0x18
	::UnityEngine::Vector3 Field_2_6; // 0x20
	::System::Boolean Field_2_11; // 0x2C
	::Class_2_D354808472AD119C_Enum_3_1A003745C1074348 Field_2_7; // 0x30
	::Struct_2_D9E98FAEB7FF7336 Field_2_5; // 0x34
	::Struct_2_D9E98FAEB7FF7336 Field_2_4; // 0x8C
	::UnityEngine::Rect Field_2_0; // 0xE4

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D354808472AD119C__CTOR_OFFSET))(this);
	}

	::System::Boolean Method_2_2635C840A82E1816(::Class_1_5A44BA76A33709FD* a1, ::Struct_2_6E1B724B14572104_2& a2, ::Struct_2_D9E98FAEB7FF7336& a3, ::Struct_2_C006DA4A56FC21E6& a4, ::Struct_2_F213AC3D3FBF57B9& a5)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_5A44BA76A33709FD*, ::Struct_2_6E1B724B14572104_2&, ::Struct_2_D9E98FAEB7FF7336&, ::Struct_2_C006DA4A56FC21E6&, ::Struct_2_F213AC3D3FBF57B9&))((::PBYTE)hIl2Cpp + CLASS_2_D354808472AD119C_METHOD_2_2635C840A82E1816_OFFSET))(this, a1, a2, a3, a4, a5);
	}

	::Class_2_D354808472AD119C_Enum_3_1A003745C1074348 Method_2_D61A6EAE766F4E89(::UnityEngine::Rect a1, ::UnityEngine::Rect a2)
	{
		return ((::Class_2_D354808472AD119C_Enum_3_1A003745C1074348(*)(::PVOID, ::UnityEngine::Rect, ::UnityEngine::Rect))((::PBYTE)hIl2Cpp + CLASS_2_D354808472AD119C_METHOD_2_D61A6EAE766F4E89_OFFSET))(this, a1, a2);
	}

	static ::Class_2_D354808472AD119C* Method_2_A9E3ECA7BB667BD5(::Class_5_DCFF91E03A93C03C* a1, ::UnityEngine::Rect a2)
	{
		return ((::Class_2_D354808472AD119C*(*)(::Class_5_DCFF91E03A93C03C*, ::UnityEngine::Rect))((::PBYTE)hIl2Cpp + CLASS_2_D354808472AD119C_METHOD_2_A9E3ECA7BB667BD5_OFFSET))(a1, a2);
	}

	::System::Boolean Method_2_E886FC6E092B74BC(::UnityEngine::Rect a1, ::UnityEngine::Rect a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Rect, ::UnityEngine::Rect))((::PBYTE)hIl2Cpp + CLASS_2_D354808472AD119C_METHOD_2_E886FC6E092B74BC_OFFSET))(this, a1, a2);
	}
};
