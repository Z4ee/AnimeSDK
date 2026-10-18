#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

class Class_0_16E4307DCC419505_726;
class Class_1_5AD3EC2EA1B1D5CD;
class Class_3_8FE97C7AF0AD648D;
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_F0A9C093A5893703_METHOD_3_143476BE61E30980_OFFSET UNITYSDK_OFFSET(0xE509BF0)
#define CLASS_3_F0A9C093A5893703_METHOD_3_1BBCBC1834131496_OFFSET UNITYSDK_OFFSET(0xE509DF0)
#define CLASS_3_F0A9C093A5893703_METHOD_3_405E7BE2AF607DE7_OFFSET UNITYSDK_OFFSET(0xE509EB0)
#define CLASS_3_F0A9C093A5893703_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xE509A40)
#define CLASS_3_F0A9C093A5893703__CTOR_OFFSET UNITYSDK_OFFSET(0xE509A10)

inline static constexpr unsigned int Class_3_F0A9C093A5893703_TypeDefinitionIndex = 57937;

class Class_3_F0A9C093A5893703 : public ::RPG::GameCore::ImmediateTaskBase_1<::Class_3_8FE97C7AF0AD648D*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::Class_3_8FE97C7AF0AD648D* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::Class_3_8FE97C7AF0AD648D*))((::PBYTE)hIl2Cpp + CLASS_3_F0A9C093A5893703__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_F0A9C093A5893703_ONTASKBEGIN_OFFSET))(this);
	}

	::Class_1_5AD3EC2EA1B1D5CD* Method_3_143476BE61E30980()
	{
		return ((::Class_1_5AD3EC2EA1B1D5CD*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_F0A9C093A5893703_METHOD_3_143476BE61E30980_OFFSET))(this);
	}

	::System::UInt32 Method_3_1BBCBC1834131496(::System::Int32 a1)
	{
		return ((::System::UInt32(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_3_F0A9C093A5893703_METHOD_3_1BBCBC1834131496_OFFSET))(this, a1);
	}

	static ::System::Void Method_3_405E7BE2AF607DE7(::Class_1_5AD3EC2EA1B1D5CD* a1, ::Class_0_16E4307DCC419505_726* a2, ::System::UInt32 a3)
	{
		return ((::System::Void(*)(::Class_1_5AD3EC2EA1B1D5CD*, ::Class_0_16E4307DCC419505_726*, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_3_F0A9C093A5893703_METHOD_3_405E7BE2AF607DE7_OFFSET))(a1, a2, a3);
	}
};
