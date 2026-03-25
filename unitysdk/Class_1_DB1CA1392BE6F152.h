#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_8385F95FFA7FAA1C;
class Class_1_867B6CE75953535A_1;
class Class_1_86D6A61A4F68A5B8;
class Class_1_DB1CA1392BE6F152_Class_1_222A701F7C5EBAAC;
class Class_1_DB1CA1392BE6F152_Class_1_44494F1EF855DA72_1;
class Class_1_F3BE5FADB5DD266C;
class Class_2_0C58AD91B0F4D809;
class Class_3_D6E9A038FA23103A;
namespace RPG::Client::LittleGame::FourRotateVoxel { class FourRotateVoxelGlobalData; }
namespace RPG::GameCore { class FourRotateVoxelRevertConfig; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_DB1CA1392BE6F152_EXECUTE_OFFSET UNITYSDK_OFFSET(0x10B902D0)
#define CLASS_1_DB1CA1392BE6F152_INITIALIZE_OFFSET UNITYSDK_OFFSET(0x10B8F4A0)
#define CLASS_1_DB1CA1392BE6F152_METHOD_1_120F3E78FD790D2F_OFFSET UNITYSDK_OFFSET(0x10B90020)
#define CLASS_1_DB1CA1392BE6F152_METHOD_1_411D8A50B429935B_OFFSET UNITYSDK_OFFSET(0x10B93580)
#define CLASS_1_DB1CA1392BE6F152_METHOD_1_5A8901E8A5FBE143_OFFSET UNITYSDK_OFFSET(0x10B928D0)
#define CLASS_1_DB1CA1392BE6F152_METHOD_1_8DA3FEE3379AFF0E_OFFSET UNITYSDK_OFFSET(0x10B92810)
#define CLASS_1_DB1CA1392BE6F152_METHOD_1_98CF22BA36B43C83_OFFSET UNITYSDK_OFFSET(0x10B8F740)
#define CLASS_1_DB1CA1392BE6F152_METHOD_1_B398AFD1E2CF0066_OFFSET UNITYSDK_OFFSET(0x10B93910)
#define CLASS_1_DB1CA1392BE6F152_METHOD_1_C74CF020AA42ED85_OFFSET UNITYSDK_OFFSET(0x10B93E80)
#define CLASS_1_DB1CA1392BE6F152_METHOD_1_D6CD9EC0DBFE46B5_OFFSET UNITYSDK_OFFSET(0x10B8FC90)
#define CLASS_1_DB1CA1392BE6F152_METHOD_1_E7E9F676B6489F3A_OFFSET UNITYSDK_OFFSET(0x10B92DA0)
#define CLASS_1_DB1CA1392BE6F152_METHOD_1_ED34DCC6F6541B09_OFFSET UNITYSDK_OFFSET(0x10B92770)
#define CLASS_1_DB1CA1392BE6F152_TEARDOWN_OFFSET UNITYSDK_OFFSET(0x10B8F690)
#define CLASS_1_DB1CA1392BE6F152__CCTOR_OFFSET UNITYSDK_OFFSET(0x10B93E90)
#define CLASS_1_DB1CA1392BE6F152__CTOR_OFFSET UNITYSDK_OFFSET(0x10B8F440)

inline static constexpr unsigned int Class_1_DB1CA1392BE6F152_TypeDefinitionIndex = 62511;

class Class_1_DB1CA1392BE6F152 : public ::System::Object
{
public:
	static ::System::Collections::Generic::List_1<::System::Single>** StaticGet_Field_1_2()
	{
		return (::System::Collections::Generic::List_1<::System::Single>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_DB1CA1392BE6F152_TypeDefinitionIndex)->GetStaticField(0x48090);
	}
	::Class_1_DB1CA1392BE6F152_Class_1_44494F1EF855DA72_1* Field_1_11; // 0x10
	::Class_1_DB1CA1392BE6F152_Class_1_222A701F7C5EBAAC* Field_1_12; // 0x18
	::Class_1_867B6CE75953535A_1* Field_1_0; // 0x20
	::Class_3_D6E9A038FA23103A* Field_1_1; // 0x28
	::RPG::Client::LittleGame::FourRotateVoxel::FourRotateVoxelGlobalData* Field_1_10; // 0x30
	::System::Single Field_1_7; // 0x38
	::System::Single Field_1_13; // 0x3C
	::System::Boolean Field_1_6; // 0x40
	::System::Boolean Field_1_4; // 0x41
	::System::Single Field_1_9; // 0x44
	::System::Int32 Field_1_5; // 0x48
	::System::Int32 Field_1_3; // 0x4C
	::System::Single Field_1_8; // 0x50

	::System::Void _ctor(::Class_1_867B6CE75953535A_1* a1, ::Class_3_D6E9A038FA23103A* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_867B6CE75953535A_1*, ::Class_3_D6E9A038FA23103A*))((::PBYTE)hIl2Cpp + CLASS_1_DB1CA1392BE6F152__CTOR_OFFSET))(this, a1, a2);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_DB1CA1392BE6F152__CCTOR_OFFSET))();
	}

	::System::Void Initialize()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_DB1CA1392BE6F152_INITIALIZE_OFFSET))(this);
	}

	::System::Void TearDown()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_DB1CA1392BE6F152_TEARDOWN_OFFSET))(this);
	}

	::System::Void Method_1_98CF22BA36B43C83(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_DB1CA1392BE6F152_METHOD_1_98CF22BA36B43C83_OFFSET))(this, a1);
	}

	::System::Void Execute()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_DB1CA1392BE6F152_EXECUTE_OFFSET))(this);
	}

	::System::Void Method_1_120F3E78FD790D2F(::Class_2_0C58AD91B0F4D809* a1, ::Class_1_8385F95FFA7FAA1C* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_0C58AD91B0F4D809*, ::Class_1_8385F95FFA7FAA1C*))((::PBYTE)hIl2Cpp + CLASS_1_DB1CA1392BE6F152_METHOD_1_120F3E78FD790D2F_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_5A8901E8A5FBE143(::Class_2_0C58AD91B0F4D809* a1, ::Class_1_8385F95FFA7FAA1C* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_0C58AD91B0F4D809*, ::Class_1_8385F95FFA7FAA1C*))((::PBYTE)hIl2Cpp + CLASS_1_DB1CA1392BE6F152_METHOD_1_5A8901E8A5FBE143_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_D6CD9EC0DBFE46B5(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_DB1CA1392BE6F152_METHOD_1_D6CD9EC0DBFE46B5_OFFSET))(this, a1);
	}

	::System::Void Method_1_B398AFD1E2CF0066(::RPG::GameCore::FourRotateVoxelRevertConfig* a1, ::Class_1_8385F95FFA7FAA1C* a2, ::Class_1_F3BE5FADB5DD266C* a3)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::FourRotateVoxelRevertConfig*, ::Class_1_8385F95FFA7FAA1C*, ::Class_1_F3BE5FADB5DD266C*))((::PBYTE)hIl2Cpp + CLASS_1_DB1CA1392BE6F152_METHOD_1_B398AFD1E2CF0066_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_1_E7E9F676B6489F3A(::Class_2_0C58AD91B0F4D809* a1, ::Class_1_8385F95FFA7FAA1C* a2, ::Class_1_86D6A61A4F68A5B8* a3)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_0C58AD91B0F4D809*, ::Class_1_8385F95FFA7FAA1C*, ::Class_1_86D6A61A4F68A5B8*))((::PBYTE)hIl2Cpp + CLASS_1_DB1CA1392BE6F152_METHOD_1_E7E9F676B6489F3A_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_1_8DA3FEE3379AFF0E(::Class_1_8385F95FFA7FAA1C* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_8385F95FFA7FAA1C*))((::PBYTE)hIl2Cpp + CLASS_1_DB1CA1392BE6F152_METHOD_1_8DA3FEE3379AFF0E_OFFSET))(this, a1);
	}

	::System::Void Method_1_411D8A50B429935B(::Class_1_8385F95FFA7FAA1C* a1, ::System::Single a2, ::System::Single a3)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_8385F95FFA7FAA1C*, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_DB1CA1392BE6F152_METHOD_1_411D8A50B429935B_OFFSET))(this, a1, a2, a3);
	}

	::System::Int32 Method_1_C74CF020AA42ED85()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_DB1CA1392BE6F152_METHOD_1_C74CF020AA42ED85_OFFSET))(this);
	}

	::System::Void Method_1_ED34DCC6F6541B09(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_DB1CA1392BE6F152_METHOD_1_ED34DCC6F6541B09_OFFSET))(this, a1);
	}
};
