#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

namespace RPG::GameCore { class TaskContext; }
namespace RPG::GameCore { class WaitStreamingJobFinished; }

#define CLASS_2_B047EE1D61D7289A_DISPOSE_OFFSET UNITYSDK_OFFSET(0x18AB8C30)
#define CLASS_2_B047EE1D61D7289A_METHOD_2_3A2B74C5E3816DEB_OFFSET UNITYSDK_OFFSET(0x18AB8D90)
#define CLASS_2_B047EE1D61D7289A_METHOD_2_B078C58C2CD24B5E_OFFSET UNITYSDK_OFFSET(0x18AB9060)
#define CLASS_2_B047EE1D61D7289A_METHOD_2_D7B7C909A67BD350_OFFSET UNITYSDK_OFFSET(0x18AB90E0)
#define CLASS_2_B047EE1D61D7289A_METHOD_2_F675341C48ED6437_OFFSET UNITYSDK_OFFSET(0x18AB91C0)
#define CLASS_2_B047EE1D61D7289A_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x18AB8C70)
#define CLASS_2_B047EE1D61D7289A_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x18AB8CC0)
#define CLASS_2_B047EE1D61D7289A_TICK_OFFSET UNITYSDK_OFFSET(0x18AB8D10)
#define CLASS_2_B047EE1D61D7289A__CTOR_OFFSET UNITYSDK_OFFSET(0x18AB8C20)

inline static constexpr unsigned int Class_2_B047EE1D61D7289A_TypeDefinitionIndex = 59077;

class Class_2_B047EE1D61D7289A : public ::Class_1_5F51D4049EA87B7B
{
public:
	::RPG::GameCore::WaitStreamingJobFinished* OFKGLJOAMLD; // 0x18

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::WaitStreamingJobFinished* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::WaitStreamingJobFinished*))((::PBYTE)hIl2Cpp + CLASS_2_B047EE1D61D7289A__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B047EE1D61D7289A_DISPOSE_OFFSET))(this);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B047EE1D61D7289A_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B047EE1D61D7289A_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_B047EE1D61D7289A_TICK_OFFSET))(this, a1);
	}

	static ::System::Boolean Method_2_3A2B74C5E3816DEB(::System::Boolean a1)
	{
		return ((::System::Boolean(*)(::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_B047EE1D61D7289A_METHOD_2_3A2B74C5E3816DEB_OFFSET))(a1);
	}

	static ::System::Boolean Method_2_D7B7C909A67BD350()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_2_B047EE1D61D7289A_METHOD_2_D7B7C909A67BD350_OFFSET))();
	}

	static ::System::Void Method_2_F675341C48ED6437()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_B047EE1D61D7289A_METHOD_2_F675341C48ED6437_OFFSET))();
	}

	static ::System::Boolean Method_2_B078C58C2CD24B5E()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_2_B047EE1D61D7289A_METHOD_2_B078C58C2CD24B5E_OFFSET))();
	}
};
