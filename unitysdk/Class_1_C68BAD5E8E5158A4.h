#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/MVector3.h"
#include "unitysdk/System/Object.h"

class Class_1_C68BAD5E8E5158A4_Class_1_9E0EFF2F7A5DF5D3;
class Class_2_EDB8B79DDF6AC1E2;
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class IList_1; }

#define CLASS_1_C68BAD5E8E5158A4_METHOD_1_15B35FDD0878E799_OFFSET UNITYSDK_OFFSET(0x19220340)
#define CLASS_1_C68BAD5E8E5158A4_METHOD_1_3D2CBD43B7DB7167_OFFSET UNITYSDK_OFFSET(0x1921F830)
#define CLASS_1_C68BAD5E8E5158A4_METHOD_1_BD1B962D0F105ADE_OFFSET UNITYSDK_OFFSET(0x1920BD60)
#define CLASS_1_C68BAD5E8E5158A4__CTOR_OFFSET UNITYSDK_OFFSET(0x19220740)

inline static constexpr unsigned int Class_1_C68BAD5E8E5158A4_TypeDefinitionIndex = 8702;

class Class_1_C68BAD5E8E5158A4 : public ::System::Object
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C68BAD5E8E5158A4__CTOR_OFFSET))(this);
	}

	static ::System::Boolean Method_1_BD1B962D0F105ADE(::System::Collections::Generic::IList_1<::RPG::MVector3>* a1, ::System::Single a2, ::System::Int32& a3, ::Il2CppArray<::System::Int32>*& a4)
	{
		return ((::System::Boolean(*)(::System::Collections::Generic::IList_1<::RPG::MVector3>*, ::System::Single, ::System::Int32&, ::Il2CppArray<::System::Int32>*&))((::PBYTE)hIl2Cpp + CLASS_1_C68BAD5E8E5158A4_METHOD_1_BD1B962D0F105ADE_OFFSET))(a1, a2, a3, a4);
	}

	static ::System::Boolean Method_1_3D2CBD43B7DB7167(::System::Collections::Generic::HashSet_1<::Class_1_C68BAD5E8E5158A4_Class_1_9E0EFF2F7A5DF5D3*>* a1, ::System::Int32 a2, ::Class_2_EDB8B79DDF6AC1E2* a3)
	{
		return ((::System::Boolean(*)(::System::Collections::Generic::HashSet_1<::Class_1_C68BAD5E8E5158A4_Class_1_9E0EFF2F7A5DF5D3*>*, ::System::Int32, ::Class_2_EDB8B79DDF6AC1E2*))((::PBYTE)hIl2Cpp + CLASS_1_C68BAD5E8E5158A4_METHOD_1_3D2CBD43B7DB7167_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_1_15B35FDD0878E799(::System::Collections::Generic::HashSet_1<::Class_1_C68BAD5E8E5158A4_Class_1_9E0EFF2F7A5DF5D3*>* a1, ::Il2CppArray<::System::Int32>*& a2)
	{
		return ((::System::Void(*)(::System::Collections::Generic::HashSet_1<::Class_1_C68BAD5E8E5158A4_Class_1_9E0EFF2F7A5DF5D3*>*, ::Il2CppArray<::System::Int32>*&))((::PBYTE)hIl2Cpp + CLASS_1_C68BAD5E8E5158A4_METHOD_1_15B35FDD0878E799_OFFSET))(a1, a2);
	}
};
