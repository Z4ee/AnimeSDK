#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/LittleGameShare/MsgRetcode.h"
#include "unitysdk/System/Object.h"

class Class_1_9AD828BA811E7C7A;
class Class_1_CE89E018B1132F67_1;
class Class_1_F8E9FB82D76BCA64_Class_3_11CBDCA989A0D873;
template <typename T1, typename T2> class Class_1_F8E9FB82D76BCA64_TypedPacketHandler_2;

inline static constexpr unsigned int Class_1_F8E9FB82D76BCA64_TypedHandlerInfo_2_TypeDefinitionIndex = 35412;

template <typename TReq, typename TRsp>
class Class_1_F8E9FB82D76BCA64_TypedHandlerInfo_2 : public ::System::Object
{
public:
	::Class_1_F8E9FB82D76BCA64_TypedPacketHandler_2<TReq, TRsp>* _PacketHandler; // 0x0
	::System::UInt32 _RspMsgID_k__BackingField; // 0x0
};
