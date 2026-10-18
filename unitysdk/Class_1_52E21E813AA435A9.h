#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_150;
class Class_0_16E4307DCC419505_160;
class Class_1_59F064CC78086962;
namespace System::Collections::Generic { template <typename T> class IReadOnlyList_1; }

#define CLASS_1_52E21E813AA435A9_GET_CONFIG_OFFSET UNITYSDK_OFFSET(0x1C57DBC0)
#define CLASS_1_52E21E813AA435A9_GET_IDENTIFIER_OFFSET UNITYSDK_OFFSET(0x1C57DBB0)
#define CLASS_1_52E21E813AA435A9_GET_TALENTPOINTS_OFFSET UNITYSDK_OFFSET(0x1C57DBD0)
#define CLASS_1_52E21E813AA435A9_METHOD_1_2C29287F3D7C754F_OFFSET UNITYSDK_OFFSET(0x1C570C40)
#define CLASS_1_52E21E813AA435A9_METHOD_1_B7592B2BDF345A00_OFFSET UNITYSDK_OFFSET(0x1C572970)
#define CLASS_1_52E21E813AA435A9__CTOR_OFFSET UNITYSDK_OFFSET(0x1C56D6F0)

inline static constexpr unsigned int Class_1_52E21E813AA435A9_TypeDefinitionIndex = 41875;

class Class_1_52E21E813AA435A9 : public ::System::Object
{
public:
	::Class_0_16E4307DCC419505_150* _Config_k__BackingField; // 0x10
	::System::Collections::Generic::IReadOnlyList_1<::Class_1_59F064CC78086962*>* _TalentPoints_k__BackingField; // 0x18
	::Class_0_16E4307DCC419505_160* KGJMIFOJIAF; // 0x20
	::System::UInt32 _Identifier_k__BackingField; // 0x28

	::System::Void _ctor(::System::UInt32 a1, ::Class_0_16E4307DCC419505_150* a2, ::System::Collections::Generic::IReadOnlyList_1<::Class_1_59F064CC78086962*>* a3, ::Class_0_16E4307DCC419505_160* a4)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::Class_0_16E4307DCC419505_150*, ::System::Collections::Generic::IReadOnlyList_1<::Class_1_59F064CC78086962*>*, ::Class_0_16E4307DCC419505_160*))((::PBYTE)hIl2Cpp + CLASS_1_52E21E813AA435A9__CTOR_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::UInt32 get_Identifier()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_52E21E813AA435A9_GET_IDENTIFIER_OFFSET))(this);
	}

	::Class_0_16E4307DCC419505_150* get_Config()
	{
		return ((::Class_0_16E4307DCC419505_150*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_52E21E813AA435A9_GET_CONFIG_OFFSET))(this);
	}

	::System::Collections::Generic::IReadOnlyList_1<::Class_1_59F064CC78086962*>* get_TalentPoints()
	{
		return ((::System::Collections::Generic::IReadOnlyList_1<::Class_1_59F064CC78086962*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_52E21E813AA435A9_GET_TALENTPOINTS_OFFSET))(this);
	}

	::System::Boolean Method_1_B7592B2BDF345A00()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_52E21E813AA435A9_METHOD_1_B7592B2BDF345A00_OFFSET))(this);
	}

	::Class_1_59F064CC78086962* Method_1_2C29287F3D7C754F(::System::UInt32 a1)
	{
		return ((::Class_1_59F064CC78086962*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_52E21E813AA435A9_METHOD_1_2C29287F3D7C754F_OFFSET))(this, a1);
	}
};
