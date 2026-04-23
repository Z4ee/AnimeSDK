#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_576;
class Class_0_16E4307DCC419505_708;
class Class_1_5B1D050D81192A0F;
class Class_1_6CB9D8ECA6D8C71B;
namespace RPG::GameCore { class FateTextDynamicParamConfig; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_1244640A944D6EC9_METHOD_1_4F80DFABE1588E7F_OFFSET UNITYSDK_OFFSET(0x128669A0)
#define CLASS_1_1244640A944D6EC9_METHOD_1_7A256D66575B8491_OFFSET UNITYSDK_OFFSET(0x12866C20)
#define CLASS_1_1244640A944D6EC9_METHOD_1_9193A83D56976AD3_OFFSET UNITYSDK_OFFSET(0x12866370)
#define CLASS_1_1244640A944D6EC9_METHOD_1_A8DC5E5878F702A4_OFFSET UNITYSDK_OFFSET(0x12866A00)
#define CLASS_1_1244640A944D6EC9_METHOD_1_F6607C3EEA45E849_OFFSET UNITYSDK_OFFSET(0x12866630)
#define CLASS_1_1244640A944D6EC9__CTOR_OFFSET UNITYSDK_OFFSET(0x12866360)

inline static constexpr unsigned int Class_1_1244640A944D6EC9_TypeDefinitionIndex = 59001;

class Class_1_1244640A944D6EC9 : public ::System::Object
{
public:
	// static const ::System::Int32 Field_1_3 = 0x14; // 0x0
	::Class_0_16E4307DCC419505_576* Field_1_2; // 0x10
	::System::Collections::Generic::List_1<::Class_0_16E4307DCC419505_708*>* Field_1_1; // 0x18
	::RPG::Client::TextID Field_1_0; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1244640A944D6EC9__CTOR_OFFSET))(this);
	}

	static ::Class_1_1244640A944D6EC9* Method_1_9193A83D56976AD3(::RPG::Client::TextID a1, ::RPG::GameCore::FateTextDynamicParamConfig* a2, ::Class_1_5B1D050D81192A0F* a3, ::Class_1_6CB9D8ECA6D8C71B* a4)
	{
		return ((::Class_1_1244640A944D6EC9*(*)(::RPG::Client::TextID, ::RPG::GameCore::FateTextDynamicParamConfig*, ::Class_1_5B1D050D81192A0F*, ::Class_1_6CB9D8ECA6D8C71B*))((::PBYTE)hIl2Cpp + CLASS_1_1244640A944D6EC9_METHOD_1_9193A83D56976AD3_OFFSET))(a1, a2, a3, a4);
	}

	::System::String* Method_1_F6607C3EEA45E849()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1244640A944D6EC9_METHOD_1_F6607C3EEA45E849_OFFSET))(this);
	}

	::Il2CppArray<::System::Object*>* Method_1_4F80DFABE1588E7F(::Il2CppArray<::RPG::GameCore::FixPoint>* a1)
	{
		return ((::Il2CppArray<::System::Object*>*(*)(::PVOID, ::Il2CppArray<::RPG::GameCore::FixPoint>*))((::PBYTE)hIl2Cpp + CLASS_1_1244640A944D6EC9_METHOD_1_4F80DFABE1588E7F_OFFSET))(this, a1);
	}

	static ::Il2CppArray<::System::Object*>* Method_1_7A256D66575B8491(::Il2CppArray<::RPG::GameCore::FixPoint>* a1)
	{
		return ((::Il2CppArray<::System::Object*>*(*)(::Il2CppArray<::RPG::GameCore::FixPoint>*))((::PBYTE)hIl2Cpp + CLASS_1_1244640A944D6EC9_METHOD_1_7A256D66575B8491_OFFSET))(a1);
	}

	static ::Il2CppArray<::System::Object*>* Method_1_A8DC5E5878F702A4(::Il2CppArray<::RPG::GameCore::FixPoint>* a1, ::System::String* a2)
	{
		return ((::Il2CppArray<::System::Object*>*(*)(::Il2CppArray<::RPG::GameCore::FixPoint>*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_1244640A944D6EC9_METHOD_1_A8DC5E5878F702A4_OFFSET))(a1, a2);
	}
};
