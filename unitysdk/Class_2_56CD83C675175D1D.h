#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

class Class_3_5775A4FEC79026BC;
namespace RPG::Client::Prop { class RubikCubePuzzleBoard; }
namespace RPG::Client::Prop { class RubikCubePuzzleCube; }
namespace RPG::GameCore { class RubikEventListener; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_2_56CD83C675175D1D_DISPOSE_OFFSET UNITYSDK_OFFSET(0x110C7EB0)
#define CLASS_2_56CD83C675175D1D_METHOD_2_414E668C8B9EEDBC_OFFSET UNITYSDK_OFFSET(0x110C8270)
#define CLASS_2_56CD83C675175D1D_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x110C8220)
#define CLASS_2_56CD83C675175D1D_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x110C7FB0)
#define CLASS_2_56CD83C675175D1D_TICK_OFFSET UNITYSDK_OFFSET(0x110C8000)
#define CLASS_2_56CD83C675175D1D__CTOR_OFFSET UNITYSDK_OFFSET(0x110C7E20)

inline static constexpr unsigned int Class_2_56CD83C675175D1D_TypeDefinitionIndex = 47197;

class Class_2_56CD83C675175D1D : public ::Class_1_5F51D4049EA87B7B
{
public:
	::RPG::GameCore::TaskContext* Field_2_1; // 0x18
	::RPG::GameCore::RubikEventListener* Field_2_0; // 0x20
	::RPG::Client::Prop::RubikCubePuzzleBoard* Field_2_2; // 0x28
	::Class_3_5775A4FEC79026BC* Field_2_3; // 0x30

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::RubikEventListener* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::RubikEventListener*))((::PBYTE)hIl2Cpp + CLASS_2_56CD83C675175D1D__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_56CD83C675175D1D_DISPOSE_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_56CD83C675175D1D_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_56CD83C675175D1D_TICK_OFFSET))(this, a1);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_56CD83C675175D1D_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void Method_2_414E668C8B9EEDBC(::RPG::Client::Prop::RubikCubePuzzleCube* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::Prop::RubikCubePuzzleCube*))((::PBYTE)hIl2Cpp + CLASS_2_56CD83C675175D1D_METHOD_2_414E668C8B9EEDBC_OFFSET))(this, a1);
	}
};
