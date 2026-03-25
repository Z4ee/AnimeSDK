#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define CLASS_3_30B1EF70F36B0248_METHOD_3_9B7C85FBDDFDAE6D_OFFSET UNITYSDK_OFFSET(0x16DA9580)
#define CLASS_3_30B1EF70F36B0248_METHOD_3_FCE92D332F1E367F_OFFSET UNITYSDK_OFFSET(0x16DA9500)
#define CLASS_3_30B1EF70F36B0248__CTOR_OFFSET UNITYSDK_OFFSET(0x16DA9550)

inline static constexpr unsigned int Class_3_30B1EF70F36B0248_TypeDefinitionIndex = 21088;

class Class_3_30B1EF70F36B0248 : public ::RPG::GameCore::TaskConfig
{
public:
	::Il2CppArray<::System::String*>* Field_3_3; // 0x18
	::Il2CppArray<::System::String*>* Field_3_5; // 0x20
	::Il2CppArray<::System::String*>* Field_3_4; // 0x28
	::Il2CppArray<::System::String*>* Field_3_2; // 0x30
	::Il2CppArray<::System::String*>* Field_3_1; // 0x38
	::System::String* Field_3_0; // 0x40

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_30B1EF70F36B0248__CTOR_OFFSET))(this);
	}

	static ::System::Void Method_3_FCE92D332F1E367F(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_3_30B1EF70F36B0248*& a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_3_30B1EF70F36B0248*&))((::PBYTE)hIl2Cpp + CLASS_3_30B1EF70F36B0248_METHOD_3_FCE92D332F1E367F_OFFSET))(a1, a2);
	}

	static ::System::Void Method_3_9B7C85FBDDFDAE6D(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_3_30B1EF70F36B0248* a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_3_30B1EF70F36B0248*))((::PBYTE)hIl2Cpp + CLASS_3_30B1EF70F36B0248_METHOD_3_9B7C85FBDDFDAE6D_OFFSET))(a1, a2);
	}
};
