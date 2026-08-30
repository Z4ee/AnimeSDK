#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/DanmuType.h"
#include "unitysdk/Struct_2_137AB23E3A00ECA1.h"
#include "unitysdk/System/Object.h"

class Class_1_1842CDA6A764B151;
class Class_1_849EE5CF9026AE9F;
namespace RPG::Client { class MonoDanmuController; }
namespace RPG::GameCore { class DanmuGroupRow; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_1840863A7E9666C9_METHOD_1_21D6A03FD2765A05_OFFSET UNITYSDK_OFFSET(0x17CB2BD0)
#define CLASS_1_1840863A7E9666C9_METHOD_1_31C76F3E26753821_OFFSET UNITYSDK_OFFSET(0x17CB2630)
#define CLASS_1_1840863A7E9666C9_METHOD_1_9168C122B1225B01_OFFSET UNITYSDK_OFFSET(0x17CB27C0)
#define CLASS_1_1840863A7E9666C9_METHOD_1_B25127531483F4C5_OFFSET UNITYSDK_OFFSET(0x17CB29A0)
#define CLASS_1_1840863A7E9666C9__CTOR_OFFSET UNITYSDK_OFFSET(0x17CB2CE0)

inline static constexpr unsigned int Class_1_1840863A7E9666C9_TypeDefinitionIndex = 68899;

class Class_1_1840863A7E9666C9 : public ::System::Object
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1840863A7E9666C9__CTOR_OFFSET))(this);
	}

	::Class_1_1842CDA6A764B151* Method_1_31C76F3E26753821(::System::UInt32 a1, ::RPG::GameCore::DanmuType a2, ::System::Single a3)
	{
		return ((::Class_1_1842CDA6A764B151*(*)(::PVOID, ::System::UInt32, ::RPG::GameCore::DanmuType, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_1840863A7E9666C9_METHOD_1_31C76F3E26753821_OFFSET))(this, a1, a2, a3);
	}

	::System::Collections::Generic::List_1<::Class_1_849EE5CF9026AE9F*>* Method_1_9168C122B1225B01(::RPG::GameCore::DanmuGroupRow* a1)
	{
		return ((::System::Collections::Generic::List_1<::Class_1_849EE5CF9026AE9F*>*(*)(::PVOID, ::RPG::GameCore::DanmuGroupRow*))((::PBYTE)hIl2Cpp + CLASS_1_1840863A7E9666C9_METHOD_1_9168C122B1225B01_OFFSET))(this, a1);
	}

	::Class_1_849EE5CF9026AE9F* Method_1_B25127531483F4C5(::RPG::GameCore::DanmuType a1, ::System::UInt32 a2)
	{
		return ((::Class_1_849EE5CF9026AE9F*(*)(::PVOID, ::RPG::GameCore::DanmuType, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_1840863A7E9666C9_METHOD_1_B25127531483F4C5_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_21D6A03FD2765A05(::RPG::Client::MonoDanmuController* a1, ::Struct_2_137AB23E3A00ECA1 a2, ::System::Single a3)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::MonoDanmuController*, ::Struct_2_137AB23E3A00ECA1, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_1840863A7E9666C9_METHOD_1_21D6A03FD2765A05_OFFSET))(this, a1, a2, a3);
	}
};
