#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_2898945DE6487BDA;
class Class_1_36816D4DE394D200;
namespace RPG::GameCore { class GameEntity; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_02E912740C419AD3_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1444C500)
#define CLASS_1_02E912740C419AD3_METHOD_1_2450CFC043E97F54_OFFSET UNITYSDK_OFFSET(0x1444C3E0)
#define CLASS_1_02E912740C419AD3_METHOD_1_31B86CF031D1C6B2_OFFSET UNITYSDK_OFFSET(0x1444CB90)
#define CLASS_1_02E912740C419AD3_METHOD_1_43535ED8A0DF5FF8_OFFSET UNITYSDK_OFFSET(0x1444CD30)
#define CLASS_1_02E912740C419AD3_METHOD_1_7B7D6BD6F55BCF32_OFFSET UNITYSDK_OFFSET(0x1444C8D0)
#define CLASS_1_02E912740C419AD3_METHOD_1_7FD7D34994C88765_OFFSET UNITYSDK_OFFSET(0x1444C620)
#define CLASS_1_02E912740C419AD3_METHOD_1_BD5B1FFF405BD771_OFFSET UNITYSDK_OFFSET(0x1444C740)
#define CLASS_1_02E912740C419AD3_METHOD_1_CE3C9FF63C908564_OFFSET UNITYSDK_OFFSET(0x1444C7F0)
#define CLASS_1_02E912740C419AD3_METHOD_1_E8FA93423D350C35_OFFSET UNITYSDK_OFFSET(0x1444C990)
#define CLASS_1_02E912740C419AD3_METHOD_1_F0088C88851A7DFB_OFFSET UNITYSDK_OFFSET(0x1444CD40)
#define CLASS_1_02E912740C419AD3__CTOR_OFFSET UNITYSDK_OFFSET(0x1444CD50)

inline static constexpr unsigned int Class_1_02E912740C419AD3_TypeDefinitionIndex = 67290;

class Class_1_02E912740C419AD3 : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::System::String*>* Field_1_0; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::Class_1_2898945DE6487BDA*>* Field_1_1; // 0x18
	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::Class_1_2898945DE6487BDA*>* Field_1_2; // 0x20
	::System::Boolean Field_1_3; // 0x28
	::System::Boolean Field_1_4; // 0x29

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_02E912740C419AD3__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_2450CFC043E97F54()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_02E912740C419AD3_METHOD_1_2450CFC043E97F54_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_02E912740C419AD3_DISPOSE_OFFSET))(this);
	}

	::Class_1_2898945DE6487BDA* Method_1_BD5B1FFF405BD771(::RPG::GameCore::GameEntity* a1, ::System::Boolean a2)
	{
		return ((::Class_1_2898945DE6487BDA*(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_02E912740C419AD3_METHOD_1_BD5B1FFF405BD771_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_7FD7D34994C88765()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_02E912740C419AD3_METHOD_1_7FD7D34994C88765_OFFSET))(this);
	}

	::System::Void Method_1_CE3C9FF63C908564(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_02E912740C419AD3_METHOD_1_CE3C9FF63C908564_OFFSET))(this, a1);
	}

	::System::Void Method_1_7B7D6BD6F55BCF32(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_02E912740C419AD3_METHOD_1_7B7D6BD6F55BCF32_OFFSET))(this, a1);
	}

	::System::Void Method_1_31B86CF031D1C6B2(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_02E912740C419AD3_METHOD_1_31B86CF031D1C6B2_OFFSET))(this, a1);
	}

	::Class_1_2898945DE6487BDA* Method_1_E8FA93423D350C35(::Class_1_36816D4DE394D200* a1)
	{
		return ((::Class_1_2898945DE6487BDA*(*)(::PVOID, ::Class_1_36816D4DE394D200*))((::PBYTE)hIl2Cpp + CLASS_1_02E912740C419AD3_METHOD_1_E8FA93423D350C35_OFFSET))(this, a1);
	}

	::System::Collections::Generic::List_1<::System::String*>* Method_1_43535ED8A0DF5FF8()
	{
		return ((::System::Collections::Generic::List_1<::System::String*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_02E912740C419AD3_METHOD_1_43535ED8A0DF5FF8_OFFSET))(this);
	}

	::System::Boolean Method_1_F0088C88851A7DFB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_02E912740C419AD3_METHOD_1_F0088C88851A7DFB_OFFSET))(this);
	}
};
