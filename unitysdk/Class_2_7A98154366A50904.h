#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5136E14D9202F88B.h"
#include "unitysdk/Class_2_7A98154366A50904_WorldFourSpeState.h"
#include "unitysdk/RPG/MVector3.h"

class Class_1_A4F0FA6F81B0B135;
namespace System { class String; }

#define CLASS_2_7A98154366A50904_METHOD_2_39590AB2089F9F4D_OFFSET UNITYSDK_OFFSET(0x168504B0)
#define CLASS_2_7A98154366A50904_METHOD_2_41A65CD6A0F4418F_OFFSET UNITYSDK_OFFSET(0x168507D0)
#define CLASS_2_7A98154366A50904_METHOD_2_4343F372F34C05BF_OFFSET UNITYSDK_OFFSET(0x168502F0)
#define CLASS_2_7A98154366A50904_METHOD_2_5A124CAF1E48B74F_OFFSET UNITYSDK_OFFSET(0x16850A50)
#define CLASS_2_7A98154366A50904_METHOD_2_8CA88D55ECEFAD59_OFFSET UNITYSDK_OFFSET(0x16850380)
#define CLASS_2_7A98154366A50904_METHOD_2_8F7825DAFFB9B517_OFFSET UNITYSDK_OFFSET(0x16850570)
#define CLASS_2_7A98154366A50904__CTOR_OFFSET UNITYSDK_OFFSET(0x168502E0)
#define CLASS_2_7A98154366A50904___ADDENDCELLEFFECT_B__4_0_OFFSET UNITYSDK_OFFSET(0x16850CC0)
#define CLASS_2_7A98154366A50904___ADDSTARTCELLEFFECT_B__3_0_OFFSET UNITYSDK_OFFSET(0x16850CB0)

inline static constexpr unsigned int Class_2_7A98154366A50904_TypeDefinitionIndex = 72079;

class Class_2_7A98154366A50904 : public ::Class_1_5136E14D9202F88B
{
public:
	// static const ::System::String* Field_2_0; // 0x0
	// static const ::System::String* Field_2_1; // 0x0
	// static const ::System::String* Field_2_2; // 0x0
	// static const ::System::Single Field_2_3; // 0x0
	::Class_2_7A98154366A50904_WorldFourSpeState Field_2_4; // 0x28
	::RPG::MVector3 Field_2_5; // 0x2C
	::RPG::MVector3 Field_2_6; // 0x38
	::System::Single Field_2_7; // 0x44

	::System::Void _ctor(::Class_1_A4F0FA6F81B0B135* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_A4F0FA6F81B0B135*))((::PBYTE)hIl2Cpp + CLASS_2_7A98154366A50904__CTOR_OFFSET))(this, a1);
	}

	::System::Void Method_2_4343F372F34C05BF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_7A98154366A50904_METHOD_2_4343F372F34C05BF_OFFSET))(this);
	}

	::System::Void Method_2_39590AB2089F9F4D(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_7A98154366A50904_METHOD_2_39590AB2089F9F4D_OFFSET))(this, a1);
	}

	::System::Void Method_2_8F7825DAFFB9B517()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_7A98154366A50904_METHOD_2_8F7825DAFFB9B517_OFFSET))(this);
	}

	::System::Void Method_2_5A124CAF1E48B74F()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_7A98154366A50904_METHOD_2_5A124CAF1E48B74F_OFFSET))(this);
	}

	::System::Void Method_2_8CA88D55ECEFAD59()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_7A98154366A50904_METHOD_2_8CA88D55ECEFAD59_OFFSET))(this);
	}

	::System::Void Method_2_41A65CD6A0F4418F(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_7A98154366A50904_METHOD_2_41A65CD6A0F4418F_OFFSET))(this, a1);
	}

	::System::Void __AddStartCellEffect_b__3_0()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_7A98154366A50904___ADDSTARTCELLEFFECT_B__3_0_OFFSET))(this);
	}

	::System::Void __AddEndCellEffect_b__4_0()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_7A98154366A50904___ADDENDCELLEFFECT_B__4_0_OFFSET))(this);
	}
};
